#include <bits/stdc++.h>

int visit[123][123] = {0};
int arr[123][123] = {0};
int ans[123][123] = {0};
int n;

void dfs(int node,int k){
	for(int i=1; i<=n; i++){
		if(arr[k][i] && !visit[k][i]){
			ans[node][i] = 1;
			visit[k][i] = 1;
			dfs(node,i);
		}
	}
	return;
}

int main(){
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i=1; i<=n; i++){
		memset(visit, 0, sizeof(visit));
		dfs(i,i);
	}
	
	for(int i=1; i<=n; i++,puts("")) for(int j=1; j<=n; j++) printf("%d ", ans[i][j]);
	return 0;
}
