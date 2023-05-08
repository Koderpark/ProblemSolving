#include <bits/stdc++.h>
using namespace std;

int arr[256][256] = {0};
int vis[256][256] = {0};

int dx[] = {1,1,1,0,0,-1,-1,-1};
int dy[] = {1,0,-1,1,-1,1,0,-1};

int dfs(int x, int y){
	vis[x][y] = 1;
	for(int i=0; i<8; i++){
		int nx = x+dx[i];
		int ny = y+dy[i];
		
		if(arr[nx][ny] == 1 && vis[nx][ny] == 0){
			dfs(nx,ny);
		}
	}
	return 0;
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int x,y;
	cin >> x >> y;
	for(int i=1; i<=x; i++){
		for(int j=1; j<=y; j++){
			cin >> arr[i][j];
		}
	}
	
	int ans = 0;
	for(int i=1; i<=x; i++){
		for(int j=1; j<=y; j++){
			if(arr[i][j] == 1 && vis[i][j] == 0){
				ans++;
				dfs(i,j);
			}
		}
	}
	cout << ans;
	return 0;
} 
