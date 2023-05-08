#include <bits/stdc++.h>
using namespace std;

int a,b;
int N,M;
vector<int> g[1234];
int vis[1234] = {0};

int bfs(int node){
	queue<int> q;
	q.push(node);
	vis[node] = 1;
	
	while(!q.empty()){
		int now = q.front(); q.pop();
		
		if(now == b) return vis[b];
		
		for(int nxt : g[now]){
			if(vis[nxt] == 0){
				vis[nxt] = vis[now]+1;
				q.push(nxt);
			}
		}
	}
	return 0;
}

int main(){
	cin >> a >> b;
	cin >> N >> M;
	
	int x,y;
	for(int i=0; i<M; i++){
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	
	if(a==b){
		cout << "0";
		return 0;
	}
	
	cout << bfs(a)-1;
	return 0;
}
