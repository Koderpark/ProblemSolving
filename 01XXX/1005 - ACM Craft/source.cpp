#include <bits/stdc++.h>
using namespace std;

int n,k;
int ans[1234] = {0};
int timer[1234] = {0};
int indeg[1234] = {0};

vector<int> g[1234];
queue<int> q;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		memset(ans,   0, sizeof(ans));
		memset(timer, 0, sizeof(timer));
		memset(indeg, 0, sizeof(indeg));
		for(int i=0; i<1234; i++) g[i].clear();
		while(!q.empty()) q.pop();
		int x,y,w;
		int sum = 0;
		
		scanf("%d %d", &n, &k);
		for(int i=1; i<=n; i++){ scanf("%d", &timer[i]); }
		for(int i=0; i<k;  i++){
			scanf("%d %d", &x, &y);
			g[x].push_back(y);
			indeg[y]++;
		}
		scanf("%d", &w);
		
		
		for(int i=1; i<=n; i++){
			if(indeg[i] == 0){
				q.push(i);
				ans[i] = timer[i];
			}
		}
		
		while(!q.empty()){
			int now = q.front();
			q.pop();
			
			if(now == w) break;
			
			for(int j=0; j<g[now].size(); j++){
				int next = g[now][j];
				indeg[next]--;
				if(indeg[next] == 0){ q.push(next); }
				ans[next] = max(ans[next], ans[now]+timer[next]);
			}
		}
		printf("%d\n", ans[w]);
	}
	return 0;
}
