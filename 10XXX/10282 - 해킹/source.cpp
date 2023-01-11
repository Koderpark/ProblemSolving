// only dijkstra

#include <bits/stdc++.h>
#define INF 1e9+7
using namespace std;

vector<pair<int,int>> g[12345];
int d[12345];

void dijkstra(int k){
	priority_queue<pair<int,int>> pq;
	pq.push({0,k});
	
	for(int i=0; i<12345; i++) d[i] = INF;
	d[k] = 0;
	
	while(!pq.empty()){
		int now =  pq.top().second;
		int dis = -pq.top().first;
		pq.pop();
		
		//printf("DEBUG : [ %d %d %d ]\n", now, dis, g[now].size());
		
		for(int i=0; i<g[now].size(); i++){
			int next = g[now][i].second;
			int dist = dis - g[now][i].first;
			
			//printf("DEBUG #2 : [ %d %d %d ]\n", next, dist, d[next]);
			
			if(dist < d[next]){
				pq.push({-dist,next});
				d[next] = dist;
			}
		}
	}
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		int n,x,c;
		cin >> n >> x >> c;
		
		for(int i=0; i<12345; i++) g[i].clear();
		
		
		for(int i=0; i<x; i++){
			int a,b,s;
			cin >> a >> b >> s;
			g[b].push_back({-s,a});
		}
		
		dijkstra(c);
		
		int cnt = 0;
		int maxv = -1;
		for(int i=0; i<12345; i++){
			if(d[i] != INF) cnt++;
			if(d[i] != INF) maxv = max(maxv, d[i]);
		}
		
		cout << cnt << " " << maxv << "\n";
	}
	return 0;
}
