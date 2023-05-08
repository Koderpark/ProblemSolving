#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int N,K,R;

bool road[123][123][4] = {0};
bool vis[123][123] = {0};

vector<pair<int,int>> point;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int dfs(int x,int y){
	for(int i=0; i<4; i++){
		int nx = x+dx[i];
		int ny = y+dy[i];
		if(1<=nx && nx<=N && 1<=ny && ny<=N){
			if(road[x][y][i]) continue;
			if(vis[nx][ny]) continue;
			
			vis[nx][ny] = true;
			dfs(nx,ny);
		}
	}
	return 0;
}

int main(){
	int ans = 0;
	int a,b,c,d;
	
	cin >> N >> K >> R;
	for(int i=0; i<R; i++){
		cin >> a >> b >> c >> d;
		for(int j=0; j<4; j++){
			if(a+dx[j] == c && b+dy[j] == d){
				road[a][b][j] = true;
			}
			if(c+dx[j] == a && d+dy[j] == b){
				road[c][d][j] = true;
			}
		}
	}
	
	for(int i=0; i<K; i++){
		cin >> a >> b;
		point.push_back({a,b});
	}
	
	for(auto node : point){
		memset(vis,0,sizeof(vis));
		vis[node.x][node.y] = true;
		dfs(node.x, node.y);
		
		for(auto chk : point){
			if(vis[chk.x][chk.y] != true){
				ans++;
				//printf("{%d %d} -> {%d %d}\n", node.x, node.y, chk.x, chk.y);
			}
		}
	}
	
	cout << ans/2;
	return 0;
}
