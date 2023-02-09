#include <bits/stdc++.h>
#define x first
#define y second
#define INF 998244353
using namespace std;

int N,M,T;
int S,G,H;
int GHval;

vector<int> dest;
vector<pair<int,int>> g[2345];
priority_queue<pair<int,int>> pq;

int fromS[2345];
int fromG[2345];
int fromH[2345];

void dijkstra(int start, int *ans){
	for(int i=0; i<2345; i++) ans[i] = INF;
	
	ans[start] = 0;
	pq.push({0,start});
	
	while(!pq.empty()){
		int now =  pq.top().y;
		int dis = -pq.top().x;
		pq.pop();
		
		if(ans[now] < dis) continue;
		
		for(auto next : g[now]){
			if(ans[next.x] > dis + next.y){
				ans[next.x] = dis + next.y;
				pq.push({-(dis+next.y), next.x});
			}
		}
	}
	return;
}

int main(){
	int t;
	int a,b,x;
	cin >> t;
	while(t--){
		for(int i=0; i<2345; i++) g[i].clear();
		dest.clear();
		
		cin >> N >> M >> T;
		cin >> S >> G >> H;
		for(int i=0; i<M; i++){
			cin >> a >> b >> x;
			g[a].push_back({b,x});
			g[b].push_back({a,x});
			if(a == G && b == H) GHval = x;
			if(b == G && a == H) GHval = x;
		}
		
		for(int i=0; i<T; i++){
			cin >> x;
			dest.push_back(x);
		}
		
		sort(dest.begin(), dest.end());
		
		dijkstra(S, fromS);
		dijkstra(G, fromG);
		dijkstra(H, fromH);
		
		for(int K : dest){
			bool flag = false;		
			if(fromS[K] == fromS[G] + GHval + fromH[K]) flag = true; // S G H K
			if(fromS[K] == fromS[H] + GHval + fromG[K]) flag = true; // S H G K 
			if(flag == true){ cout << K << " "; }
		}
		cout << "\n";
	}
	return 0;
}

