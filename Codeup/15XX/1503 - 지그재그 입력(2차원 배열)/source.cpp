#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(i%2==1)	for(int j=(i-1)*n; j<i*n; j++)	printf("%d ", j+1);
		else		for(int j=i*n; j>(i-1)*n; j--)	printf("%d ", j);
		printf("\n");
	}
	return 0;
}
