#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int arr[123][123] = {0};
int vis[123][123] = {0};

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int bfs(int x, int y){
	queue<pair<int,int>> q;
	
	int ans = 1;
	q.push({x,y});
	vis[x][y] = 1;
	
	while(!q.empty()){
		auto pos = q.front();
		q.pop();
		
		for(int i=0; i<4; i++){
			int nx = pos.x + dx[i];
			int ny = pos.y + dy[i];
			
			if(arr[nx][ny] == 1 && vis[nx][ny] == 0){
				ans++;
				q.push({nx,ny});
				vis[nx][ny] = 1;
			}
		}
	}
	return ans;
}

int main(){
	int N,M,K;
	int x,y;
	
	cin >> N >> M >> K;
	for(int i=0; i<K; i++){
		cin >> x >> y;
		arr[x][y] = 1;
	}
	
	int ans = -1;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			if(arr[i][j] == 1 && vis[i][j] == 0){
				ans = max(ans, bfs(i,j));
			}
		}
	}
	cout << ans;
	return 0;
}
