#include <bits/stdc++.h>
#define INF 123456789
using namespace std;
typedef long long int ll;

vector<pair<int,int>> g[1234];
priority_queue<pair<int,int>> pq;

int d[1234] = {0};
int track[1234] = {0};

void dijkstra(int k){
	for(int i=0; i<1234; i++) d[i] = INF;
	for(int i=0; i<1234; i++) track[i] = -1;
	
	pq.push({0,k});
	d[k] = 0;
	
	while(!pq.empty()){
		int now =  pq.top().second;
		int dis = -pq.top().first;
		pq.pop();
		
		if(d[now] < dis) continue;
		
		for(int i=0; i<g[now].size(); i++){
			int next = g[now][i].first;
			int dist = g[now][i].second + dis;
			
			if(d[next] > dist){
				d[next] = dist;
				pq.push({-dist, next});
				track[next] = now;
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
		g[a].push_back({b,c});
	}
	scanf("%d %d", &a, &b);
	
	dijkstra(a);
	stack<int> s;
	int node = b;
	while(node != -1){ s.push(node); node = track[node]; }
	
	printf("%d\n", d[b]);
	printf("%d\n", s.size());
	while(!s.empty()){ printf("%d ", s.top()); s.pop(); }
	return 0;
}
