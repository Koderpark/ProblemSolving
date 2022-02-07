#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int N,Q;
int D[512][512] = {0};
int C,s,e;

vector<pair<int,int>> g[512];
priority_queue<pair<int,int>> pq;

int dp[512] = {0};

void dijkstra(int node){
	memset(dp, 0x3f, sizeof(dp));
	pq.push({0,node});
	dp[node] = 0;
	
	while(!pq.empty()){
		auto now = pq.top(); pq.pop();
		
		if(dp[now.y] < -now.x) continue;
		
		for(auto nxt : g[now.y]){
			int nxtdis = -now.x + nxt.x;
			
			if(dp[nxt.y] > nxtdis && nxt.y < C){
				dp[nxt.y] = nxtdis;
				pq.push({-nxtdis, nxt.y});
			}
		}
	}
	return;
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> N >> Q;
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cin >> D[i][j];
			if(D[i][j] != 0){
				g[i].push_back({j,D[i][j]});
			}
		}
	}
	
	for(int i=0; i<Q; i++){
		cin >> C >> s >> e;
		dijkstra(s);
		cout << dp[e] << "\n";
	}
	
	
	return 0;
}
