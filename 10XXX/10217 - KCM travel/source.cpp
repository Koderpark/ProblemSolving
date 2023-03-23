#include <bits/stdc++.h>
#define INF 998244353
#define x first
#define y second
using namespace std;

int d[101][10001] = {0};
int N,M,K;
vector<pair<int,pair<int,int>>> g[101];
priority_queue<pair<int,pair<int,int>>> pq;

void dijkstra(){
	for(int i=0; i<101; i++) for(int j=0; j<10001; j++) d[i][j] = INF;
	
	int dist, cost, curr;
	
	pq.push({0,{0,1}});
	
	while(!pq.empty()){
		dist = -pq.top().x;
		cost = pq.top().y.x;
		curr = pq.top().y.y;
		pq.pop();
		
		for(auto nxt : g[curr]){
			if(cost + nxt.y.x <= M && dist + nxt.y.y < d[nxt.x][cost + nxt.y.x]){
				d[nxt.x][cost + nxt.y.x] = dist + nxt.y.y;
				pq.push({-(dist+nxt.y.y), {cost + nxt.y.x, nxt.x}});
			}
		}
	}
	return;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t,A,B,C,D;
	cin >> t;
	while(t--){
		for(int i=0; i<101; i++) g[i].clear();
		
		cin >> N >> M >> K;
		
		for(int i=0; i<K; i++){
			cin >> A >> B >> C >> D;
			g[A].push_back({B,{C,D}});
		}
		
		dijkstra();
		
		int ans = INF;
		for(int i=0; i<=M; i++){ ans = min(ans, d[N][i]); }
		
		if(ans == INF) cout << "Poor KCM\n";
		else cout << ans << "\n";
	}
	return 0;
}
