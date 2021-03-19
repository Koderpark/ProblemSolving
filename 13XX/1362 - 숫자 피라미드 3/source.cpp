#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int sum = n*(n+1)/2;
	for(int i=1; i<=n; i++){
		for(int j=0; j<i; j++){
			printf("%d ", sum--);
		}
		printf("\n");
	}
	return 0;
}
