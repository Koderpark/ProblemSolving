#include <bits/stdc++.h>
using namespace std;

vector<int> g[123456];
int ans[123456] = {0};

void dfs(int node){
	for(int i=0; i<g[node].size(); i++){
		if(!ans[g[node][i]]){
			ans[g[node][i]] = node;
			dfs(g[node][i]);
		}
	}
	return;
}

int main(){
	int n;
	int a,b;
	scanf("%d", &n);
	for(int i=0; i<n-1; i++){
		scanf("%d %d", &a, &b);
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	dfs(1);
	for(int i=2; i<=n; i++) printf("%d\n", ans[i]);
	return 0;
}
