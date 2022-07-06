#include <bits/stdc++.h>
using namespace std;

int n;
float x[123];
float y[123];

int parent[123] = {0};

struct graph{
	float dis;
	int a;
	int b;
};

vector<graph> g;

bool cmp(graph a, graph b){
	if(a.dis == b.dis && a.b == b.b) return a.a < b.a;
	else if (a.dis == b.dis) return a.b < b.b;
	return a.dis < b.dis;
}

int find(int node){
	if(parent[node] == node) return node;
	return parent[node] = find(parent[node]);
}

void unionf(int a, int b){
	a = find(a);
	b = find(b);
	parent[a] = b;
	return;
}

float dist(int a, int b){
	float i = (x[a]-x[b]);
	float j = (y[a]-y[b]);
	float tmp = i*i + j*j;
	return sqrt(tmp);
}

int main(){
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%f %f", &x[i], &y[i]);
	for(int i=1; i<=n; i++){
		for(int j=i+1; j<=n; j++){
			g.push_back({dist(i,j),i,j});
		}
	}
	
	float ans;
	sort(g.begin(), g.end(), cmp);
	for(int i=0; i<123;      i++) parent[i] = i;
	for(int i=0; i<g.size(); i++){
		if(find(g[i].a) != find(g[i].b)){
			ans += g[i].dis;
			unionf(g[i].a,g[i].b);
		}
	}
	printf("%f", ans);
	return 0;
}
