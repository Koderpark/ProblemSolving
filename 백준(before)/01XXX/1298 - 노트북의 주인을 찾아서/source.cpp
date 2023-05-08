#include <bits/stdc++.h>
using namespace std;

vector<int> g[123];
int match[123] = {0};
bool chk[123];

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
	int N,M,a,b;
	cin >> N >> M;
	for(int i=0; i<M; i++){
		cin >> a >> b;
		g[a].push_back(b);
	}
	
	int ans = 0;
	for(int i=1; i<=N; i++){
		memset(chk, 0, sizeof(chk));
		if(dfs(i)){
			ans++;
		}
	}
	cout << ans;
	return 0;
}
