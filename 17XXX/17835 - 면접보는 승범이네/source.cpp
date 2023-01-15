#include <bits/stdc++.h>
#define INF 998244353998244353LL
#define x first
#define y second

using namespace std;
typedef long long ll;

vector<pair<ll,int>> graph[123456];
priority_queue<pair<ll,int>> pq;

ll d[123456] = {0};

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=0; i<123456; i++) d[i] = INF;
	
	int N,M,K;
	int a,b,c,tmp;
	cin >> N >> M >> K;
	
	for(int i=0; i<M; i++){
		cin >> a >> b >> c;
		graph[b].push_back({a,c});
	}
	
	for(int i=0; i<K; i++){
		cin >> tmp;
		d[tmp] = 0;
		pq.push({0,tmp});
	}
	
	while(!pq.empty()){
		ll dist = -pq.top().x;
		int node =  pq.top().y;
		pq.pop();
		
		if(d[node] < dist) continue;
		
		for(auto it : graph[node]){
			int nnode = it.x;
			ll ndist = it.y + dist;
			
			if(d[nnode] > ndist){
				d[nnode] = ndist;
				pq.push({-ndist, nnode});
			}
		}
	}
	
	ll ans = -1;
	int idx = 0;
	for(int i=1; i<=N; i++){
		if(ans < d[i]){
			ans = d[i];
			idx = i;
		}
	}
	
	cout << idx << "\n";
	cout << ans << "\n";
	return 0;
}

