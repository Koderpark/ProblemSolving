#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

vector<int> g[234567];

vector<int> group[123456];
int dist[234567];
int N,L,k;

void dijkstra(int s){
	for(int i=0; i<234567; i++) dist[i] = 998244353;
	priority_queue<pair<int,int>> pq;
	
	dist[s] = 0;
	pq.push({0,s});
	
	while(!pq.empty()){
		int now =  pq.top().y;
		int dis = -pq.top().x;
		pq.pop();
		
		for(auto nxt : g[now]){
			if(nxt > N){
				if(dist[nxt] > dis+1){
					dist[nxt] = dis+1;
					pq.push({-dist[nxt], nxt});
				}
			}
			else{ 
				if(dist[nxt] > dis){
					dist[nxt] = dis;
					pq.push({-dist[nxt], nxt});
				}
			}
		}
	}
	return;
}

int main(){
	int s,e;
	
	cin >> N >> L;
	for(int i=N+1; i<N+L+1; i++){
		while(1){
			cin >> k;
			if(k==-1) break;
			
			g[k].push_back(i);
			g[i].push_back(k);
		}
	}
	cin >> s >> e;
	
	if(s==e){ cout << 0; return 0; }
	
	dijkstra(s);
	
	if(dist[e] == 998244353) cout << -1;
	else cout << dist[e]-1;
	return 0;
}
