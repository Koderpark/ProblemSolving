#include <stdio.h>

int d[1001][1001] = {0};
int e[1001] = {0};
int f[1001] = {0};
	
int n,m;
int k;
int x1,y1,x2,y2,u;

int main(){
	scanf("%d %d %d", &n, &m, &k);
	for(int i=0; i<k; i++){
		scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &u);
		d[x1][y1] +=u;
		d[x2+1][y2+1] +=u;
		
		d[x1][y2+1] -=u;
		d[x2+1][y1] -=u;
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			e[j] = e[j-1]+d[i][j];
			printf("%d ", e[j]+f[j]);
			f[j]+=e[j];
		}
		printf("\n");
	}
	
	return 0;
}
