#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(i==1||i==n||j==1||j==n) printf("*");
			else if(i==j) printf("*");
			else if(i-1==n-j)printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
