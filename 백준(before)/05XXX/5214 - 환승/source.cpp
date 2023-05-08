#include <bits/stdc++.h>

using namespace std;

vector<int> edge[123456];
int vis[123456] = {0};
queue<int> q;

int main(){
	int n,k,m;
	int tmp;
	scanf("%d %d %d", &n, &k, &m);
	for(int i=n+1; i<m+n+1; i++){
		for(int j=0; j<k; j++){
			scanf("%d", &tmp);
			edge[i].push_back(tmp);
			edge[tmp].push_back(i);
		}
	}
	
	int node;
	q.push(1);
	vis[1] = 1;
	
	while(!q.empty()){
		node = q.front();
		q.pop();
		       
		for(int i=0; i<edge[node].size(); i++){
			if( vis[edge[node][i]] == 0 ){
				q.push(edge[node][i]);
				vis[edge[node][i]] = vis[node]+1;
			}
		}
	}
	if(vis[n] == 0) printf("-1");
	else printf("%d", (vis[n]+1)/2);
	return 0;
}
