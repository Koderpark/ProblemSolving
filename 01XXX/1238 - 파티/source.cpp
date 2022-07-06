#include <bits/stdc++.h>
#define INF 123457890
using namespace std;

vector<pair<int,int>> edge[12345];
priority_queue<pair<int,int>> pq;

int dis[12345] = {0}; 
int arr[12345];

void dijkstra(int k){
	for(int i=0; i<12345; i++) arr[i] = INF;
	
	arr[k] = 0;
	pq.push({0,k});
	
	while(!pq.empty()){
		int dist = -pq.top().first;
		int node = pq.top().second;
		pq.pop();
		
		if(dist > arr[node]) continue;
		
		for(int i=0; i<edge[node].size(); i++){
			int noden = edge[node][i].first;
			int distn = edge[node][i].second + dist;
			
			if(distn < arr[noden]){
				arr[noden] = distn;
				pq.push({-distn, noden});
			}
		}
	}
	return;
}

int main(){
	int n,m,x;
	int a,b,c;
	scanf("%d %d %d", &n, &m, &x);
	for(int i=0; i<m; i++){
		scanf("%d %d %d", &a, &b, &c);
		edge[a].push_back({b,c});
	}
	
	dijkstra(x);
	for(int i=0; i<12345; i++) dis[i] = arr[i];
	
	int maxv = -1;
	for(int i=1; i<=n; i++){
		dijkstra(i);
		maxv = max(maxv, arr[x] + dis[i]);
	}
	printf("%d", maxv);
	return 0;
}
