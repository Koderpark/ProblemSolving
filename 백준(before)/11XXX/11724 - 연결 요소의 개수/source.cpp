#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v[1001];
int visit[1001] = {0};

void dfs(int node){
	if(visit[node] == 1) return;
	else visit[node] = 1;
	
	for(int i=0; i<v[node].size(); i++){
		dfs(v[node][i]);
	}
	return;
}

int main(){
	int n,m;
	int a,b;
	int ans = 0;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for(int i=1; i<=n; i++){
		if(visit[i] == 0){
			dfs(i);
			ans++;
		}
	}
	printf("%d", ans);
	return 0;
}
