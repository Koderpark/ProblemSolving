#include <bits/stdc++.h>
using namespace std;

int vis[123456] = {0};
vector<int> g[123456];

int cnt = 1;
void dfs(int now){
	vis[now] = cnt++;
	
	for(auto nxt : g[now]){
		if(vis[nxt] == 0){
			dfs(nxt);
		}
	}
	return;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N,M,R,a,b;
	cin >> N >> M >> R;
	
	for(int i=0; i<M; i++){
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	for(int i=0; i<123456; i++){
		sort(g[i].begin(), g[i].end(), greater<int>());
	}
	
	dfs(R);
	for(int i=1; i<=N; i++){
		cout << vis[i] << "\n";
	}
	return 0;
}
