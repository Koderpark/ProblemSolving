#include <bits/stdc++.h>
using namespace std;

int vis[1234] = {0};
int arr[1234] = {0};

vector<int> V[1234];

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
	for(int i=1; i<=n; i++){
		scanf("%d", &a);
		for(int j=0; j<a; j++){
			scanf("%d", &b);
			V[i].push_back(b);
		}
	}
	
	for(int i=1; i<=n; i++){ memset(vis, 0, sizeof(vis)); ans += dfs(i); }
	
	printf("%d", ans);
	return 0;
}
