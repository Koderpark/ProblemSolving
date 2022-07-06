#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)		printf("%c", (n-j==i+1)?'*':' ');
		for(int j=n-i; j<=n; j++)	printf("%c", (j==n)?'*':' ');
		printf("\n");
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)		printf("%c", (j==i)?'*':' ');
		for(int j=i; j<n; j++)		printf("%c", (j==n-1)?'*':' ');
		printf("\n");
	}
	return 0;
}
