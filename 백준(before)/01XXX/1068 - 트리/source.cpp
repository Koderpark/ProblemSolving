#include <bits/stdc++.h>
using namespace std;

vector<int> g[56];
int vis[56] = {0};

int ans = 0;

void dfs(int k){
	if(vis[k]) return;
	vis[k] = 1;
	
	if(g[k].size() == 0){
		ans++;
		return;
	}
	for(int i=0; i<g[k].size(); i++){
		dfs(g[k][i]);
	}
	return;
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,p,d;
	int root = 0;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> p;
		if(p == -1){ root = i; }
		else g[p].push_back(i);
	}
	
	cin >> d;
	if( root == d ){
		cout << 0;
		return 0;
	} 
	
	for(int i=0; i<56; i++){
		for(int j=0; j<g[i].size(); j++){
			if(g[i][j] == d) g[i].erase(g[i].begin() + j);
		}
	}
	
	dfs(root);
	cout << ans;
	return 0;
}
