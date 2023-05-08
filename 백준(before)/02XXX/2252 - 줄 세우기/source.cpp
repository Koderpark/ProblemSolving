#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> g[32768];

int vis[32768] = {0};
vector<int> ans;

void dfs(int node){
	vis[node] = true;
	for(int i=0; i<g[node].size(); i++){
		if(!vis[g[node][i]]){
			dfs(g[node][i]);
		}
	}
	ans.push_back(node);
	return;
}

int main(){
	int a,b;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		g[a].push_back(b);
	}
	
	for(int i=0; i<n; i++){
		for(int i=1; i<=n; i++) if(!vis[i]) dfs(i);
	}
	reverse(ans.begin(), ans.end());
	
	for(int i=0; i<ans.size(); i++){
		printf("%d ", ans[i]);
	}
	return 0;
}
