#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> g[32768];
int indegree[32768] = {0};
priority_queue<int, vector<int>, greater<int>> pq;
vector<int> ans;

void bfs(){
	while(!pq.empty()){
		int now = pq.top();
		pq.pop();
		
		ans.push_back(now);
		
		for(int i=0; i<g[now].size(); i++){
			indegree[g[now][i]]--;
			if(indegree[g[now][i]] == 0) pq.push(g[now][i]);
		}
	}
}

int main(){
	int a,b;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		g[a].push_back(b);
		indegree[b]++;
	}
	
	for(int i=1; i<=n; i++) if(indegree[i] == 0) pq.push(i);
	bfs();
	for(int i=0; i<ans.size(); i++) printf("%d ", ans[i]);
	return 0;
}
