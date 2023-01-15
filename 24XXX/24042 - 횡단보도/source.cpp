#include <bits/stdc++.h>
#define INF 998244353998244353LL
using namespace std;
typedef long long ll;

priority_queue<pair<ll,int>> pq;
vector<pair<int,int>> g[123456];

ll d[123456] = {0};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,M,a,b;
	cin >> N >> M;
	
	for(int i=1; i<=M; i++){
		cin >> a >> b;
		g[a].push_back({b,i});
		g[b].push_back({a,i});
	}
	
	for(int i=0; i<123456; i++) d[i] = INF;
	pq.push({0,1});
	d[1] = 0;
	
	while(!pq.empty()){
		int node =  pq.top().second;
		ll  dist = -pq.top().first;
		pq.pop();
		
		if(d[node] < dist) continue;
		
		for(auto nxt : g[node]){
			int nnode = nxt.first;
			ll  ndist = nxt.second;
			
			//while(dist >= ndist) ndist += M;
			if(dist > ndist)ndist += (ll)ceil((double)(dist-ndist)/M)*M;
			
			if(d[nnode] > ndist){
				d[nnode] = ndist;
				pq.push({-ndist, nnode});
			}
		}
	}
	
	cout << d[N];
	return 0;
}
