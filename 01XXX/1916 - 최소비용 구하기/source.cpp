#include <bits/stdc++.h>
#define INF 1234567890
using namespace std;

vector<pair<int,int>> v[1234];
priority_queue<pair<int,int>> pq;
int d[1234] = {0};

int main(){
	for(int i=0; i<1234; i++) d[i] = INF;
	int n,m;
	int x,y;
	int a,b,c;
	scanf("%d", &n);
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%d %d %d", &a, &b, &c);
		v[a].push_back({b,c});
	}
	scanf("%d %d", &x, &y);
	pq.push({0,x});
	d[x] = 0;
	
	while(!pq.empty()){
		int dist = -pq.top().first;
		int node = pq.top().second;
		pq.pop();
		
		if(d[node] < dist) continue;
		
		for(int i=0; i<v[node].size(); i++){
			int noden = v[node][i].first;
			int distn = v[node][i].second + dist;
			
			if(d[noden] > distn){
				d[noden] = distn;
				pq.push({-distn, noden});
			}
		}
	}
	printf("%d", d[y]);
	return 0;
}
