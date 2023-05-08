#include <stdio.h>

int main(){
	int n, sum=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)	for(int j=1; j<=i; j++) sum+=j;
	printf("%d", sum);
	return 0;
}
