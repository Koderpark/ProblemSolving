#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

int d[512][512] = {0};
int n,m,w;
int a,b,c;

int main(){
	int tc;
	scanf("%d", &tc);
	while(tc--){
		memset(d, 0, sizeof(d));
		for(int i=0; i<512; i++) for(int j=0; j<512; j++) if(i!=j) d[i][j] = INF;
		
		scanf("%d %d %d", &n, &m, &w);
		for(int i=0; i<m; i++){
			scanf("%d %d %d", &a, &b, &c);
			d[a][b] = min(d[a][b], c);
			d[b][a] = min(d[b][a], c);
		}
		for(int i=0; i<w; i++){
			scanf("%d %d %d", &a, &b, &c);
			d[a][b] = min(d[a][b], -c);
			//d[b][a] = min(d[b][a], -c);
		}
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				for(int k=1; k<=n; k++){
					d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
				}
			}
		}
		
		bool flag = 0;
		for(int i=1; i<=n; i++){ if(d[i][i] < 0) flag = 1; }
		printf("%s\n", flag?"YES":"NO");
	}
	return 0;
}
