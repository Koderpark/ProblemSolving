#include <bits/stdc++.h>
using namespace std;

vector<int> g[2345];
bool vis[2345] = {0};
int  arr[2345] = {0};

bool dfs(int node){
	if(vis[node]) return false;
	vis[node] = true;
	
	for(auto next : g[node]){
		if(!arr[next] || dfs(arr[next])){
			arr[next] = node;
			return true;
		}
	}
	return false;
}

int main(){
	int N,M,a,b;
	cin >> N >> M;
	for(int i=1; i<=N; i++){
		cin >> a;
		for(int j=0; j<a; j++){
			cin >> b;
			g[i].push_back(b);
			g[i+N].push_back(b);
		}
	}
	
	int ans = 0;
	for(int i=1; i<=N*2; i++){
		memset(vis, 0, sizeof(vis));
		if(dfs(i)) ans++;
	}
	
	cout << ans;
	return 0;
}
