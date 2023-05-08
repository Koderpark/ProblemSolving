#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%lld", (long long int)(a+b)*(a-b));
	return 0;
}
