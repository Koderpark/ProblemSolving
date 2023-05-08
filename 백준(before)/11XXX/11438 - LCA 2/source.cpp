#include <bits/stdc++.h>
using namespace std;

int depth[123456] = {0};
int sparse[123456][23] = {0};
int vis[123456] = {0};

vector<int> g[123456];

int n,m;

void init(int now, int dep){
	vis[now] = 1;
	depth[now] = dep;
	
	for(int nxt : g[now]){
		if(!vis[nxt]){
			sparse[nxt][0] = now;
			init(nxt, dep+1);
		}
	}
	
	return;
}

void init_sparse(){
	for(int j=1; j<=20; j++){
		for(int i=1; i<=n; i++){
			sparse[i][j] = sparse[sparse[i][j-1]][j-1];
		}
	}
	return;
}

int lca(int x, int y){
	if(depth[x] > depth[y]){ int k = x; x = y; y = k; }
	
	for(int i=20; i>=0; i--){
		if(depth[y]-depth[x] >= (1<<i)) y = sparse[y][i];
	}
	
	if(x==y) return x;
	
	for(int i=20; i>=0; i--){
		if(sparse[x][i] != sparse[y][i]){
			x = sparse[x][i];
			y = sparse[y][i];
		}
	}
	return sparse[x][0];
}

int main(){
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	
	cin >> n;
	for(int i=0; i<n-1; i++){
		int a,b; cin >> a >> b;
		
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	init(1,0);
	init_sparse();
	
	cin >> m;
	while(m--){
		int a,b; cin >> a >> b;
		cout << lca(a,b) << "\n";
	}
	return 0;
}
