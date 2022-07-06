#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

int g[123][123] = {0};

int main(){
	for(int i=0; i<123; i++){ for(int j=0; j<123; j++) g[i][j] = INF; }
	for(int i=0; i<123; i++){ g[i][i] = 0; }
	int n,m;
	int a,b;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		g[a][b] = 1;
	}
	for(int k=1; k<=n; k++){
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				g[i][j] = min(g[i][j], g[i][k]+g[k][j]);
			}
		}
	}
	
	for(int i=1; i<=n; i++){
		int ans = 0;
		for(int j=1; j<=n; j++){
			if(g[i][j] == INF && g[j][i] == INF){
				ans++;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
