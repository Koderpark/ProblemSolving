#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> g[123456];
int vis[123456] = {0};

int maxv; // max value
int maxn; // max node

int dfs(int node, int dis){
	for(int i=0; i<g[node].size(); i++){
		int next = g[node][i].first;
		int dist = g[node][i].second;
		
		if(vis[next]) continue;
		vis[next] = true;
		
		if(dis+dist > maxv){
			maxv = dis + dist;
			maxn = next;
		}
		dfs(next, dist+dis);
	}
	return 0;
}

int main(){
	int n;
	int a,b,c;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		while(1){
			scanf("%d", &b);
			if(b == -1) break;
			scanf("%d", &c);
			g[a].push_back({b,c});
			g[b].push_back({a,c});
		}
	}
	
	memset(vis, 0, sizeof(vis));
	vis[1] = 1;
	dfs(1,0);
	
	memset(vis, 0, sizeof(vis));
	vis[maxn] = 1;
	dfs(maxn, 0);
	
	printf("%d", maxv);
	return 0;
}
