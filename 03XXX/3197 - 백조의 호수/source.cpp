#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

pair<int,int> parent[1515][1515];

int N,M;
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};


set<pair<int,int>> st;
queue<pair<int,int>> q;
vector<pair<int,int>> swan;
string arr[1515];

bool vis[1515][1515] = {0};

pair<int,int> find(pair<int,int> pos){
	if(parent[pos.x][pos.y] == pos) return {pos.x,pos.y};
	return parent[pos.x][pos.y] = find(parent[pos.x][pos.y]);
}

void joint(pair<int,int> a, pair<int,int> b){
	a = find(a);
	b = find(b);
	b = parent[a.x][a.y];
	return;
}


void waterbfs(int x, int y){ // 경계선은 #으로 + union_find
	if(vis[x][y]) return;
	
	printf("[%d %d]\n", x,y);
	
	q.push({x,y});
	while(!q.empty()){
		x = q.front().x;
		y = q.front().y;
		q.pop();
		
		vis[x][y] = true;
		
		for(int i=0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			
			if(!(0<=nx && nx<=N)) break;
			if(!(0<=ny && ny<=M)) break;
			if(arr[x][y] == '.' && arr[nx][ny] == 'X') arr[nx][ny] = '#';
			
			if(arr[x][y] == '.' && arr[nx][ny] == '.') joint({x,y},{nx,ny});
			if(arr[nx][ny] == '.' && !vis[nx][ny]){
				q.push({nx,ny});
			}
		}
	}
	return;
}

void melt(){
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			if(arr[i][j] == '#') arr[i][j] = '.';
		}
	}
	return;
}

void arrprint(){
	for(int i=0; i<N; i++){
		cout << arr[i] << "\n";
	}
}


int main(){
	cin >> N >> M;
	
	for(int i=0; i<N; i++){
		cin >> arr[i];
		for(int j=0; j<M; j++){
			parent[i][j] = {i,j};
			if(arr[i][j] == 'L'){
				swan.push_back({i,j});
			}
		}
	}
	
	puts("--------------------------");
	
	int ans = 0;
	while(true){
		memset(vis,0,sizeof(vis));
		
		for(int i=0; i<N; i++){
			for(int j=0; j<M; j++){
				if(arr[i][j] != 'X'){
					waterbfs(i,j);
				}
			}
		}
		
		st.clear();
		
		for(auto pos : swan){ st.insert(find(pos)); }
		
		printf("{%d}\n", st.size());
		
		if(st.size() == 1) break;
		
		arrprint();
		
		melt();
		ans++;
		
		int tmp; scanf("%d", &tmp);
	}
	cout << ans;
	return 0;
}
