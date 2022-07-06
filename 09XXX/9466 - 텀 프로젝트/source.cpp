#include <bits/stdc++.h>
using namespace std;

int n;
int t;
int g[123456] = {0};
int vis[123456] = {0};
int ans[123456] = {0};
int ret;

void dfs(int node){
	vis[node] = 1;
	int next = g[node];
	
	if(!vis[next]) dfs(next);
	else if(!ans[next]){
		ret++;
		int tmp = next;
		while(tmp!=node){ tmp=g[tmp]; ret++; }
	}
	ans[node] = 1;
	return;
}

int main(){
	scanf("%d", &t);
	while(t--){
		memset(g, 0, sizeof(g));
		memset(vis, 0, sizeof(vis));
		memset(ans, 0, sizeof(ans));
		
		scanf("%d", &n);
		for(int i=1; i<=n; i++){ scanf("%d", &g[i]); }
		
		ret = 0;
		for(int i=1; i<=n; i++) if(!vis[i]) dfs(i);
		printf("%d\n", n-ret);
	}
	return 0;
}
