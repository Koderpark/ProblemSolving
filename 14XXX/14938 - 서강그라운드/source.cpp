#include <bits/stdc++.h>
#define INF 123456789
using namespace std;
typedef long long int ll;

int item[123] = {0};
vector<pair<int,int>> g[123];
priority_queue<pair<int,int>> pq;
int d[123] = {0};

int n,m,r;
int a,b,c;

void dijkstra(int k){
	for(int i=0; i<123; i++) d[i] = INF;
	d[k] = 0;
	pq.push({0,k});
	
	while(!pq.empty()){
		int now =  pq.top().second;
		int dis = -pq.top().first;
		pq.pop();
		
		for(int i=0; i<g[now].size(); i++){
			int next = g[now][i].first;
			int dist = g[now][i].second + dis;
			
			if(d[next] > dist){
				d[next] = dist;
				pq.push({-dist, next});
			}
		}
	}
	return;
}

int main(){
	scanf("%d %d %d", &n, &m, &r);
	for(int i=1; i<=n; i++) scanf("%d", &item[i]);
	for(int i=0; i<r; i++){
		scanf("%d %d %d", &a, &b, &c);
		g[a].push_back({b,c});
		g[b].push_back({a,c});
	}
	
	int ans = -1;
	for(int i=1; i<=n; i++){
		dijkstra(i);
		int tmp = 0;
		for(int j=1; j<=n; j++){
			if(d[j] <= m){ tmp += item[j]; }
		}
		ans = max(ans, tmp);
	}
	printf("%d", ans);
	return 0;
}
