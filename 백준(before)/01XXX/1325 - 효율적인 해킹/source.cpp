#include <bits/stdc++.h>
using namespace std;

int N,M;

vector<int> g[12345];
bool vis[12345] = {0};

vector<int> ans;

void dfs(int node){
	if(vis[node]) return;
	vis[node] = 1;
	
	for(auto k : g[node]){
		dfs(k);
	}
	return;
}

int main(){
	cin >> N >> M;
	for(int i=0; i<M; i++){
		int a,b;
		cin >> a >> b;
		g[b].push_back(a);
	}
	
	ans.push_back(0);
	int maxv = 0;
	for(int i=1; i<=N; i++){
		memset(vis, 0, sizeof(vis));
		dfs(i);
		int tmp = 0;
		for(int j=0; j<=M; j++) tmp += vis[j];
		ans.push_back(tmp);
		maxv = max(maxv, tmp);
		
	}
	for(int i=0; i<ans.size(); i++) if(ans[i] == maxv) cout << i << " ";
	return 0;
}
