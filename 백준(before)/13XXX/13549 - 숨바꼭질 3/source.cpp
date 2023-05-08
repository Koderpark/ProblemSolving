#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

priority_queue<pair<int,int>> pq;

int d[123456] = {0};

void dijkstra(int node){
	for(int i=0; i<123456; i++) d[i] = INF;
	d[node] = 0;
	pq.push({0,node});
	
	while(!pq.empty()){
		int now =  pq.top().second;
		int dir = -pq.top().first;
		pq.pop();
		
		if(0 <= 2*now && 2*now <= 100000){
			if(d[2*now] > dir){
				d[2*now] = dir;
				pq.push({-dir, 2*now});
			}
		}
		
		if(0 <= now+1 && now+1 <= 100000){
			if( d[now+1] > dir + 1 ){
				d[now+1] = dir + 1;
				pq.push({-(dir+1), now+1});
			}
		}
		
		if(0 <= now-1 && now-1 <= 100000){
			if( d[now-1] > dir + 1 ){
				d[now-1] = dir + 1;
				pq.push({-(dir+1), now-1});
			}
		}
	}
	return;
}

int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	
	dijkstra(n);
	
	printf("%d", d[k]);
	return 0;
}
