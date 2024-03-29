#include <bits/stdc++.h>
#define INF 1234567890
#define sec second
#define fir first
using namespace std;
typedef long long int ll;

vector<int> scc[123456];
vector<pair<int,int>> ansV;
int vis[123456] = {0};
int cost[123456] = {0};

vector<int> graph_N[123456]; // Normal
vector<int> graph_R[123456]; // Reverse
stack<int> s;

void dfsN(int node){ // Normal
	if(vis[node]) return;
	vis[node] = 1;
	int tmp;
	
	for(int i=0; i < graph_N[node].size(); i++){
		tmp = graph_N[node][i];
		if(vis[tmp]) continue;
		dfsN(tmp);
	}
	s.push(node);
}

void dfsR(int node, int num){ // Reverse
	if(vis[node]) return;
	vis[node] = 1;
	int tmp;
	
	for(int i=0; i < graph_R[node].size(); i++){
		tmp = graph_R[node][i];
		if(vis[tmp]) continue;
		dfsR(tmp,num);
	}
	scc[num].push_back(node);
}

int main(){
	int v,e;
	int a,b;
	int num = 0;
	ll  ans = 0;
	
	scanf("%d %d", &v, &e);
	for(int i=0; i<e; i++){
		scanf("%d %d", &a, &b);
		graph_N[a].push_back(b);
		graph_R[b].push_back(a);
	}
	
	for(int i=1; i<=v; i++) dfsN(i);
	memset(vis, 0, sizeof(vis));
	int tmp;
	
	while(!s.empty()){
		tmp = s.top();
		s.pop();
		if(vis[tmp]) continue;
		dfsR(tmp,num);
		sort(scc[num].begin(), scc[num].end());
		num++;
	}
	
	printf("%d\n", num);
	for(int i=0; i<num; i++){ ansV.push_back({scc[i][0], i}); }
	sort(ansV.begin(), ansV.end());
	for(int i=0; i<ansV.size(); i++){
		int minV = INF;
		for(int j=0; j<scc[ansV[i].sec].size(); j++){ printf("%d ", scc[ansV[i].sec][j]); }
		puts("-1");
	}
	return 0;
}
