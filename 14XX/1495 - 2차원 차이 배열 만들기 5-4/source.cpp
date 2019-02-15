#include <stdio.h>
int d[1001][1001] = {0};
int pd[1001][1001] = {0};

int main(){
	int n,m,k;
	int x1,y1,x2,y2,u;
	int sum=0;
	
	scanf("%d %d %d", &n, &m, &k);
	
	for(int i=0; i<k; i++){
		scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &u);
		d[x1][y1]+=u;
		d[x2+1][y2+1]+=u;
		d[x1][y2+1]-=u;
		d[x2+1][y1]-=u;
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			pd[i][j] = d[i-1][j] + d[i][j-1] + d[i][j];
			printf("%2d ", pd[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
