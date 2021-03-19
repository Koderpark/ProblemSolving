#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

vector<int> v[123];
queue<int> q;
int visit[123] = {0};

void bfs(){
	while(!q.empty()){
		int node = q.front();
		q.pop();
		for(int i=0; i<v[node].size(); i++){
			if(!visit[v[node][i]]){
				q.push(v[node][i]);
				visit[v[node][i]] = visit[node] + 1;
			}
		}
	}
}

int main(){
	int n,a,b;
	int m,x,y;
	scanf("%d %d %d", &n, &a, &b);
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%d %d", &x, &y);
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	q.push(a);
	visit[a] = 1;
	bfs();
	
	printf("%d", visit[b]-1);
	return 0;
}
