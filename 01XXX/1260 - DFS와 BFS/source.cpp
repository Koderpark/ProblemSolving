#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int dfsvisit[1234] = {0};
int bfsvisit[1234] = {0};

queue<int> q;

vector<int> v[1234];

void dfs(int node){
	dfsvisit[node] = 1;
	printf("%d ", node);
	
	for(int i=0; i<v[node].size(); i++){
		if(!dfsvisit[v[node][i]]) dfs(v[node][i]);
	}
	return;
}

void bfs(){
	while(!q.empty()){
		int tmp = q.front();
		bfsvisit[tmp] = 1;
		printf("%d ", tmp);
		q.pop();
		for(int i=0; i<v[tmp].size(); i++){
			if(!bfsvisit[v[tmp][i]]){
				q.push(v[tmp][i]);
				bfsvisit[v[tmp][i]] = 1;
			}
		}
	}
	return;
}

int main(){
	int n,m,V;
	int a,b;
	
	scanf("%d %d %d", &n, &m, &V);
	
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	q.push(V);
	
	for(int i=0; i<n; i++){
		if(v[i].size() != 0){
			sort(v[i].begin(), v[i].end());
		}
	}
	
	dfs(V);
	puts("");
	bfs();
}
