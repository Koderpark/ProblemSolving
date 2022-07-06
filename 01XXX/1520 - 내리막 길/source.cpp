#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = { 0, 0,-1, 1};

int n,m;

int arr[567][567] = {0};
int dp[567][567] = {0};

int dfs(int x,int y){
	if(x==1 && y==1) return 1;
	
	int &var = dp[x][y];
	if(var != -1) return var;
	
	var = 0;
	for(int i=0; i<4; i++){
		int nx = x+dx[i];
		int ny = y+dy[i];
		if(1<=nx&&nx<=n && 1<=ny&&ny<=m){
			if(arr[x][y] < arr[nx][ny]){
				var += dfs(nx,ny);
			}
		}
	}
	return var;
}

int main(){
	memset(dp, -1, sizeof(dp));
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++) scanf("%d", &arr[i][j]);
	}
	dfs(n,m);
	printf("%d", dp[n][m]);
	return 0;
}
