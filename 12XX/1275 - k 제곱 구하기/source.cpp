#include <stdio.h>

int main(){
	int n,k,sum=1;
	scanf("%d %d", &n, &k);
	for(int i=1; i<=k; i++)sum*=n;
	printf("%d", sum);
	return 0;
}
