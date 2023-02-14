#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

vector<pair<double,double>> mouse;
vector<pair<double,double>> ground;

int N,M,S,V;
int match[123] = {0};
bool vis[123] = {0};

vector<int> g[123];

double dist(auto a, auto b){
	double x = a.x - b.x;
	double y = a.y - b.y;
	return sqrt(x*x + y*y);
}

bool dfs(int node){
	for(int now : g[node]){
		if(vis[now]) continue;
		vis[now] = true;
		
		if(match[now] == -1 || dfs(match[now])){
			match[now] = node;
			return true;
		}
	}
	return false;
}

int main(){
	memset(match,-1,sizeof(match));
	cin >> N >> M >> S >> V;
	double a,b;
	
	for(int i=0; i<N; i++){
		cin >> a >> b;
		mouse.push_back({a,b});
	}
	
	for(int i=0; i<M; i++){
		cin >> a >> b;
		ground.push_back({a,b});
	}
	
	for(int i=0; i<mouse.size(); i++){
		for(int j=0; j<ground.size(); j++){
			if(dist(mouse[i],ground[j]) <= (double)S*V){
				g[i].push_back(j);
			}
		}
	}
	
	int ans = 0;
	for(int i=0; i<N; i++){
		memset(vis,0,sizeof(vis));
		if(dfs(i)) ans++;
	}
	cout << N-ans;
	return 0;
}
