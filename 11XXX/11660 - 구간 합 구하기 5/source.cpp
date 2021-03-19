#include <stdio.h>

int arr[1234][1234] = {0};
long long int sum[1234][1234] = {0};

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) scanf("%d", &arr[i][j]);
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			sum[i][j] = arr[i][j] + sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1];
		}
	}
	
	int x1,y1,x2,y2;
	for(int i=0; i<m; i++){
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		printf("%d\n", sum[x2][y2] - sum[x2][y1-1] - sum[x1-1][y2] + sum[x1-1][y1-1]);
	}
	return 0;
}
