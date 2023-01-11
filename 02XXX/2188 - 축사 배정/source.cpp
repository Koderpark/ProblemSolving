#include <bits/stdc++.h>
using namespace std;

vector<int> g[201];
int match[201] = {0,};
bool chk[201];

bool dfs(int node){
	for(auto now : g[node]){
		if(chk[now]) continue;
		chk[now] = true;
		
		if(match[now] == 0 || dfs(match[now])){
			match[now] = node;
			return true;
		}
	}
	return false;
}

int main(){
	int N,M,x,y;
	cin >> N >> M;
	for(int i=1; i<=N; i++){
		cin >> x;
		for(int j=0; j<x; j++){
			cin >> y;
			g[i].push_back(y);
		}
	}
	
	int ans = 0;
	for(int i=1; i<=N; i++){
		memset(chk, 0, sizeof(chk));
		if(dfs(i)) ans++;
	}
	cout << ans;
	return 0;
}
