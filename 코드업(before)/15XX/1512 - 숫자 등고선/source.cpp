#include <stdio.h>

int arr[101][101] = {0};

int main(){
	int n, x, y, a=1;
	scanf("%d %d %d", &n, &x, &y);
	
	arr[x][y] = 1;
	int y2=y;
	int x2=x;
	
	for(int i=x2; i>0; i--) arr[--x2][y2] = ++a;
	
	a = arr[x][y];
	x2 = x;
	
	for(int i=x2; i<n; i++) arr[++x2][y2] = ++a;
	
	for(int i=1; i<=n; i++){
		a = arr[i][y];
		y2 = y;
		
		for(int j=y; j>0; j--) arr[i][--y2] = ++a;
		
		a = arr[i][y];
		y2 = y;
		
		for(int j=y; j<n; j++) arr[i][++y2] = ++a;
	}
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
