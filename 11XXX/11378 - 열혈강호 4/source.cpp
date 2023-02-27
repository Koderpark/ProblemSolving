#include <bits/stdc++.h>
using namespace std;

int N,M,K;
vector<int> g[1234];

int vis[1234] = {0};

int match[1234] = {0};

bool dfs(int node){
	
	for(auto next : g[node]){
		if(vis[next]) continue;
		vis[next] = true;
		
		if(!match[next] || dfs(match[next])){
			match[next] = node;
			
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
		}
	}
	
	int cnt1 = 0;
	int cnt2 = 0;
	
	for(int i=1; i<=N; i++){
		memset(vis, 0, sizeof(vis));
		if(dfs(i)) cnt1++;
	}
	
	
	for(int i=0; i<K; i++){
		for(int j=1; j<=N; j++){
			memset(vis, 0, sizeof(vis));
			if(dfs(j)){
				cnt2++;
				break;
			}
		} 
		
		if(cnt1+cnt2 >= M) break;
	}
	
	cout << cnt1 + cnt2 << "\n";
	return 0;
}
