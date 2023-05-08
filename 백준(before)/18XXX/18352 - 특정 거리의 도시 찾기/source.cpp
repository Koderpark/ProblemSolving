#include <bits/stdc++.h>
using namespace std;

vector<int> g[345678];
int d[345678];

void dijkstra(int k){
	priority_queue<pair<int,int>> pq;
	for(int i=0; i<345678; i++) d[i] = 998244353;
	
	pq.push({0,k});
	d[k] = 0;
	
	while(!pq.empty()){
		int dis = -pq.top().first;
		int now = pq.top().second;
		pq.pop();
		
		for(auto nxt : g[now]){
			if(d[nxt] > dis+1){
				pq.push({-(dis+1),nxt});
				d[nxt] = dis+1;
			}
		}
	}
	return;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N,M,K,X;
	int a,b;
	
	cin >> N >> M >> K >> X;
	for(int i=0; i<M; i++){
		cin >> a >> b;
		g[a].push_back(b);
	}
	
	dijkstra(X);
	int ans = 0;
	for(int i=0; i<345678; i++){
		if(d[i] == K){
			ans++;
			cout << i << "\n";
		}
	}
	if(ans == 0){
		cout << -1;
	}
	return 0;
}
