#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

pair<int,int> parent[1515][1515];
pair<int,int> swan0;
pair<int,int> swan1;

int N,M;
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

queue<pair<int,int>> q1;
queue<pair<int,int>> q2;

string arr[1515];

bool vis[1515][1515] = {0};

pair<int,int> find(pair<int,int> pos){
	if(parent[pos.x][pos.y] == pos) return pos;
	return parent[pos.x][pos.y] = find(parent[pos.x][pos.y]);
}

void joint(pair<int,int> a, pair<int,int> b){
	a = find(a);
	b = find(b);
	parent[a.x][a.y] = b;
	return;
}

int main(){
	cin >> N >> M;
	bool flag = true;
	for(int i=0; i<N; i++){
		cin >> arr[i];
		for(int j=0; j<M; j++){
			parent[i][j] = {i,j};
			
			if(arr[i][j] == '.'){
				q2.push({i,j});
			}
			
			if(arr[i][j] == 'L'){
				arr[i][j] = '.';
				q2.push({i,j});
				if(flag) { swan0 = {i,j}; flag = false; }
				else     { swan1 = {i,j}; }
			}
		}
	}
	
	int ans = 0;
	while(true){
		while(!q2.empty()){ q1.push(q2.front()); q2.pop(); }
		
		while(!q1.empty()){
			int x = q1.front().x;
			int y = q1.front().y;
			q1.pop();

			vis[x][y] = true;
		
			for(int i=0; i<4; i++){
				int nx = x+dx[i];
				int ny = y+dy[i];

				if((0<=nx && nx<N) && (0<=ny && ny<M)){
					
					if(arr[nx][ny] == 'X') arr[nx][ny] = '#';
			
					if((arr[nx][ny] == '.') && !vis[nx][ny]) q1.push({nx,ny});
					if((arr[nx][ny] == '.') && vis[nx][ny])  joint({x,y},{nx,ny});
				}
			}
		}
		
		//int tmp; scanf("%d", &tmp);
		//puts("----------------------");
		//for(int i=0; i<N; i++) cout << arr[i] << "\n";
		//puts("----------------------");
		
		if(find(swan0) == find(swan1)) break;
		
		for(int i=0; i<N; i++){
			for(int j=0; j<M; j++){
				if(arr[i][j] == '#'){
					q2.push({i,j});
					arr[i][j] = '.';
				}
			}
		}
		ans++;
	}
	cout << ans;
	return 0;
}
