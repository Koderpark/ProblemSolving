#include <bits/stdc++.h>
using namespace std;

int N,M;
int arr[123][123] = {0};
bool vis[123][123] = {0};

int dx[] = {1,1,1,0,0,-1,-1,-1};
int dy[] = {1,0,-1,1,-1,1,0,-1};

queue<pair<int,int>> q;

bool bfs(int i, int j){
	bool ans = true;
	q.push({i,j});
	vis[i][j] = true;
	
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		for(int i=0; i<8; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx<0 || nx>=N || ny<0 || ny>=M) continue;
				
			if(arr[nx][ny] > arr[x][y]) ans = false;
			
			if(arr[nx][ny] == arr[x][y] && !vis[nx][ny]){
				vis[nx][ny] = true;
				q.push({nx,ny});
			}
		}
	}
	return ans;
}

int main(){
	cin >> N >> M;
	int tmp = 998244353;
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cin >> arr[i][j];
			tmp = min(tmp, arr[i][j]);
		}
	}
	
	int ans = 0;
	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			if(!vis[i][j] /*&& arr[i][j] != tmp*/ && bfs(i,j)){
				ans++;
			}
		}
	}
	
	cout << ans;
	return 0;
}
