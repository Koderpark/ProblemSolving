#include <bits/stdc++.h>
using namespace std;

int N,M,K;
int match[2345] = {0};
bool vis[2345] = {0};

vector<int> g[2345];

bool dfs(int node){
	for(int now : g[node]){
		if(vis[now]) continue;
		vis[now] = true;
		
		if(match[now] == 0 || dfs(match[now])){
			match[now] = node;
			return true;
		}
	}
	return false;
}

int main(){
	int a,b;
	cin >> N >> M >> K;
	for(int i=1; i<=N; i++){
		cin >> a;
		for(int j=0; j<a; j++){
			cin >> b;
			g[i].push_back(b);
			g[i+N].push_back(b);
		}
	}
	
	int ans1 = 0;
	int ans2 = 0;
	
	for(int i=1; i<=N; i++){
		memset(vis, 0, sizeof(vis));
		if(dfs(i)) ans1++;
	}
	
	for(int i=1; i<=N; i++){
		memset(vis, 0, sizeof(vis));
		if(dfs(i+N)) ans2++;
		if(ans2 == K) break;
	}
	
	cout << ans1 + ans2;
	return 0;
}
