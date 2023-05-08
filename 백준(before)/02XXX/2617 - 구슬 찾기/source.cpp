#include <bits/stdc++.h>
using namespace std;

int N,M;

vector<int> hg[123];
vector<int> lg[123];

int vis[123] = {0};

queue<int> q;

int hcnt(int node){
	memset(vis, 0, sizeof(vis));
	
	q.push(node);
	vis[node] = true;
	int ans = 0;
	
	while(!q.empty()){
		int now = q.front(); q.pop();
		
		for(int nxt : hg[now]){
			if(!vis[nxt]){
				vis[nxt] = true;
				q.push(nxt);
				ans++;
			}
		}
	}
	return ans;
}

int lcnt(int node){
	memset(vis, 0, sizeof(vis));
	
	q.push(node);
	vis[node] = true;
	int ans = 0;
	
	while(!q.empty()){
		int now = q.front(); q.pop();
		
		for(int nxt : lg[now]){
			if(!vis[nxt]){
				vis[nxt] = true;
				q.push(nxt);
				ans++;
			}
		}
	}
	return ans;
}

int main(){
	int a,b;
	cin >> N >> M;
	for(int i=0; i<M; i++){
		cin >> a >> b;
		hg[b].push_back(a);
		lg[a].push_back(b);
	}
	
	int K = (N+1)/2;
	int ans = 0;
	
	//cout << hcnt(1);
	
	for(int i=1; i<=N; i++){
		//printf("[%d %d]", hcnt(i), lcnt(i));
		if(hcnt(i) >= K || lcnt(i) >= K) ans++;
	}
	cout << ans;
	return 0;
}
