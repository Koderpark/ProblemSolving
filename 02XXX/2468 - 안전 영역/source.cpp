#include <bits/stdc++.h>
using namespace std;

int n,ans,tmp,maxh;
int arr[123][123] = {0};
int vis[123][123] = {0};

int dx[] = {-1, 1, 0, 0};
int dy[] = { 0, 0,-1, 1};

int dfs(int x, int y, int h){
	vis[x][y] = 1;
	
	for(int i=0; i<4; i++){
		int mx = x + dx[i];
		int my = y + dy[i];
		if(mx>=0 && my>=0 && n>mx && n>my){
			if(arr[mx][my] > h && !vis[mx][my]){
				dfs(mx,my,h);
			}
		}
	}
	return 0;
}

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &arr[i][j]);
			maxh = max(maxh, arr[i][j]);
		}
	}
	
	for(int h=0; h<=maxh; h++){
		memset(vis, 0, sizeof(vis));
		tmp = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(arr[i][j] > h && !vis[i][j]){ dfs(i,j,h); tmp++; }
			}
		}
		ans = max(ans, tmp);
	}
	printf("%d", ans);
	return 0;
}
