#include <bits/stdc++.h>
using namespace std;

int vis[567] = {0};
int arr[567] = {0};

vector<int> V[567];

int dfs(int node){
	if(!vis[node]){
		vis[node] = 1;
		for(int i=0; i<V[node].size(); i++){
			if(!arr[V[node][i]] || dfs(arr[V[node][i]])){
				arr[V[node][i]] = node;
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	int n,m;
	int a,b;
	int ans = 0;
	
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		V[a].push_back(b);
	}
	
	for(int i=1; i<=n; i++){ memset(vis, 0, sizeof(vis)); ans += dfs(i); }
	
	printf("%d", ans);
	return 0;
}
