#include <stdio.h>
#include <vector>
#include <queue>
#include <string.h>

using namespace std;

vector<int> v[56];
queue<int> q;
int visit[56] = {0};

vector<int> ans;

void bfs(){
	while(!q.empty()){
		int node = q.front();
		q.pop();
		for(int i=0; i<v[node].size(); i++){
			if(!visit[v[node][i]]){
				q.push(v[node][i]);
				visit[v[node][i]] = visit[node]+1;
			}
		}
	}
}

int main(){
	int n,a,b;
	scanf("%d", &n);
	while(1){
		scanf("%d %d", &a, &b);
		if(a<0 || b<0) break;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	int k = 999;
	for(int i=1; i<=n; i++){
		memset(visit, 0, sizeof(visit));
		while(!q.empty()) q.pop();
		q.push(i);
		visit[i] = 1;
		bfs();
		
		int tmp = -1;
		for(int i=1; i<=n; i++) tmp = max(tmp, visit[i]);
		ans.push_back(tmp);
		k = min(k, tmp);
	}
	
	int cnt = 0;
	for(int i=0; i<ans.size(); i++) if(k == ans[i]) cnt++;
	printf("%d %d\n", k-1, cnt);
	for(int i=0; i<ans.size(); i++) if(k == ans[i]) printf("%d ", i+1);
	return 0;
}
