#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

vector<pair<int,int>> v[123];
priority_queue<pair<int,int>> pq;
int d[123] = {0};

void dijkstra(int k){
	for(int i=0; i<123; i++) d[i] = INF;
	d[k] = 0;
	pq.push({0,k});
	
	while(!pq.empty()){
		int cur =  pq.top().second;
		int dis = -pq.top().first;
		pq.pop();
		
		if(d[cur] < dis) continue;
		
		for(int i=0; i<v[cur].size(); i++){
			int next = v[cur][i].first;
			int dist = v[cur][i].second + dis;
			if(d[next] > dist){
				d[next] = dist;
				pq.push({-dist, next});
			}
		}
	}
	return;
}

int main(){
	int n,m;
	int a,b,c;
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<m; i++){
		scanf("%d %d %d", &a, &b, &c);
		v[a].push_back({b,c});
	}
	
	for(int i=1; i<=n; i++,puts("")){
		dijkstra(i);
		for(int j=1; j<=n; j++){
			printf("%d ", d[j]==INF ? 0 : d[j]);
		}
	}
	
	return 0;
}
