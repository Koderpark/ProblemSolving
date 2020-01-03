#include <stdio.h>

int main(){
	int n,m,a;
	int i,j;
	scanf("%d %d %d", &n, &m, &a);
	for(i=1; n>a*i; i++);
	for(j=1; m>a*j; j++);
	printf("%lld",(long long int)i*j);
	return 0;
}
