#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

priority_queue<pair<int,int>> pq;
vector<pair<int,int>> v[1234];
int d[1234] = {0};
int n,m,k;
int a,b,c;
priority_queue<int> ans[1234];

void dijkstra(int node){
	for(int i=0; i<1234; i++) d[i] = INF;
	d[node] = 0;
	ans[node].push(0);
	pq.push({0, node});
	
	while(!pq.empty()){
		int now =  pq.top().second;
		int dis = -pq.top().first;
		pq.pop();
		
		for(int i=0; i<v[now].size(); i++){
			int next = v[now][i].first;
			int dist = v[now][i].second;
			
			if(ans[next].size() < k){
				pq.push({-(dist+dis), next});
				ans[next].push(dist + dis);
			}
			else if (ans[next].top() > dist + dis){
				ans[next].pop();
				ans[next].push(dist + dis);
				pq.push({-(dist+dis), next});
			}
		}
	}
	return;
}

int main(){
	scanf("%d %d %d", &n, &m, &k);
	
	for(int i=0; i<m; i++){
		scanf("%d %d %d", &a, &b, &c);
		v[a].push_back({b,c});
	}
	
	dijkstra(1);
	
	//for(int i=1; i<=n; i++) printf("[%d]", d[i]); puts("");
	
	for(int i=1; i<=n; i++){
		if(ans[i].size() != k) printf("-1\n");
		else printf("%d\n", ans[i].top()); 
	}
	return 0;
}
