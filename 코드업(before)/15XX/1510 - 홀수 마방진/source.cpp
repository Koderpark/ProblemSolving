#include <stdio.h>

int arr[50][50] = {0};

int main(){
	int a=1, n=0, x=1, y=1;
	scanf("%d", &n);
	
	y = (n+1)/2;
	arr[x][y] = a++;
	
	while(a <= n*n){
		if(arr[x][y] % n == 0)	{x++;}
		else					{x--; y++;}
		if(x<1)					{x=n;}
		if(y>n)					{y=1;}
		
		arr[x][y] = a++;
	}
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
