#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

vector<pair<int,int>> g[1234];
priority_queue<pair<int,int>> pq;
int d[1234];

void dijkstra(int k){
	for(int i=0; i<1234; i++) d[i] = INF;
	d[k] = 0;
	pq.push({0,k});
	
	while(!pq.empty()){
		int node = pq.top().second;
		int dist = -pq.top().first;
		pq.pop();
		
		if(d[node] < dist) continue;
		
		for(int i=0; i<g[node].size(); i++){
			int noden = g[node][i].first;
			int distn = g[node][i].second + dist;
			
			if(d[noden] > distn){
				d[noden] = distn;
				pq.push({-distn, noden});
			}
		}
	}
	return;
}

int main(){
	int n,e;
	int a,b,c;
	int x,y;
	scanf("%d %d", &n, &e);
	
	for(int i=0; i<e; i++){
		scanf("%d %d %d", &a, &b, &c);
		g[a].push_back({b,c});
		g[b].push_back({a,c});
	}
	scanf("%d %d", &x, &y);
	
	dijkstra(1);
	int distx = d[x]; // 1 -> x -> y -> N
	int disty = d[y]; // 1 -> y -> x -> N
	
	dijkstra(x); distx += d[y];
	dijkstra(y); distx += d[n];
	
	dijkstra(y); disty += d[x];
	dijkstra(x); disty += d[n];
	
	int ans = min(distx, disty);
	if(ans >= INF) ans = -1;
	printf("%d", ans);
	return 0;
}
