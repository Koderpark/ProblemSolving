#include <stdio.h>
#include <vector>
#include <algorithm>
#include <deque>
 
using namespace std;

struct line{ int S, E, W; };

bool compare(line a, line b){ return a.W < b.W; }

vector<line> graph;
int parent[200001] = {0};

int find(int k){
	if(parent[k] == k) return k;
	return parent[k] = find(parent[k]); 
}

void union_f(int a, int b){
	int va = find(a);
	int vb = find(b);
	if(va!=vb) parent[va] = vb;
	return;
}

int main(){
	line l1, l2;
	int n,m,a,b,c;
	long long int sum = 0;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		scanf("%d %d %d", &a, &b, &c);
		l1.S = a; l1.E = b; l1.W = c;
		graph.push_back(l1);
	}
	
	sort(graph.begin(), graph.end(), compare);
	for(int i=0; i<200001; i++) parent[i] = i;
	
	for(int i=0; i<graph.size(); i++){
		if(!(find(graph[i].S) == find(graph[i].E))){
			sum += graph[i].W;
			union_f(graph[i].S, graph[i].E);
		}
	}
	printf("%lld", sum);
	return 0;
}
