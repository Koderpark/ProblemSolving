#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[56][56];
int vis[56][56];

int dx[] = {1,0,-1,1,-1,1,0,-1};
int dy[] = {1,1,1,0,0,-1,-1,-1};

queue<pair<int,int>> q;

void bfs(){
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		for(int i=0; i<8; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(!nx || !ny || nx>N || ny>M ) continue;
			
			if(vis[nx][ny] == -1){
				vis[nx][ny] = vis[x][y]+1;
				q.push({nx,ny});
			}
		}
	}
	return;
}

int main(){
	memset(arr,  0, sizeof(arr));
	memset(vis, -1, sizeof(vis));
	
	cin >> N >> M;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			cin >> arr[i][j];
			if(arr[i][j] == 1){
				vis[i][j] = 0;
				q.push({i,j});
			}
		}
	}
	
	bfs();
	int ans = 0;
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			ans = max(ans, vis[i][j]);
			//printf("%3d", vis[i][j]);
		}
		//printf("\n");
	}
	cout << ans;
	return 0;
}
