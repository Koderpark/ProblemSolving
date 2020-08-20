#include <stdio.h>

int parent[1000010] = {0};

int find(int k){
	if(k == parent[k]) return k;
	return parent[k] = find(parent[k]);
}

void union_f(int u, int v){
	int x = find(u);
	int y = find(v);
	if(x!=y) parent[x] = y;
	return;
}

int main(){
	int n,m,a,x,y;
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<=n; i++) parent[i] = i;
	
	while(m--){
		scanf("%d %d %d", &a, &x, &y);
		if(!a) union_f(x,y);
		else{
			if(find(x)==find(y)) puts("YES");
			else	 			 puts("NO");
		}
	}
	return 0;
}
