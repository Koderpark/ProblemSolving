#include <bits/stdc++.h>
using namespace std;

int arr[123][123] = {0};
int vis[123][123] = {0};
int n,m;

int dx[] = {-1, 1, 0, 0};
int dy[] = { 0, 0,-1, 1};

void dfs(int x, int y){
	if(arr[x][y] != 0){ arr[x][y]++; return; }
	vis[x][y] = 1;
	
	for(int i=0; i<4; i++){
		int nx = x+dx[i];
		int ny = y+dy[i];
		
		if(nx<=0 || nx>n || ny<=0 || ny>m) continue;
		if(vis[nx][ny]) continue;
		dfs(nx,ny);
	}
	return;
}

bool arrchk(){
	bool ret = 0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if     (arr[i][j] >= 3){ arr[i][j] = 0; ret=1; }
			else if(arr[i][j] != 0){ arr[i][j] = 1; }
		}
	}
	return ret;
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	int ans = 0;
	while(1){
		memset(vis, 0, sizeof(vis));
		dfs(1,1);
		if(!arrchk()) break;
		ans++;
	}
	printf("%d", ans);
	return 0;
}
