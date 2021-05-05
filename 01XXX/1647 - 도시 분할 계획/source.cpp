#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct line{
	int s;
	int e;
	int w;
};

vector<line> g;

int parent[123456] = {0};

bool cmp(line a, line b){
	return a.w < b.w;
}

int find(int node){
	if(parent[node] == node) return node;
	return parent[node] = find(parent[node]);
}

void unionf(int a, int b){
	a = find(a);
	b = find(b);
	if(a!=b) parent[a] = b;
	return;
}


int main(){
	int v,e;
	int a,b,c;
	ll ans = 0;
	scanf("%d %d", &v, &e);
	
	for(int i=0; i<e; i++){
		scanf("%d %d %d", &a, &b, &c);
		g.push_back({a,b,c});
	}
	
	sort(g.begin(), g.end(), cmp);
	for(int i=0; i<123456; i++) parent[i] = i;
	
	for(int i=0; i<g.size(); i++){
		if(v == 2) break;
		if(find(g[i].s) != find(g[i].e)){
			ans += g[i].w;
			unionf(g[i].s, g[i].e);
			v--;
		}
	}
	
	printf("%lld", ans);
	return 0;
}
