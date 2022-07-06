#include <bits/stdc++.h>
#define INF 1234567890
using namespace std;

int d[23456];
priority_queue<pair<int,int>> pq;

vector<pair<int,int>> edge[23456];

int v,e,k;
int a,b,c;

int main(){
	for(int i=0; i<23456; i++) d[i] = INF;
	scanf("%d %d", &v, &e);
	scanf("%d", &k);
	
	d[k] = 0;
	pq.push({0,k});
	
	for(int i=0; i<e; i++){
		scanf("%d %d %d", &a, &b, &c);
		edge[a].push_back({b,c});
	}
	
	while(!pq.empty()){
		int cur =  pq.top().second;
		int dis = -pq.top().first;
		pq.pop();
		
		if(d[cur] < dis){ continue; }
		
		for(int i=0; i<edge[cur].size(); i++){
			int nex    = edge[cur][i].first;
			int nexdis = dis + edge[cur][i].second;
			if(d[nex]>nexdis){
				d[nex] = nexdis;
				pq.push({-nexdis,nex});
			}
		}
	}
	
	for(int i=1; i<=v; i++){
		if(d[i] == INF) puts("INF");
		else printf("%d\n",d[i]);
	}
	return 0;
}
