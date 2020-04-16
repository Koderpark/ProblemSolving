#include <stdio.h>
#include <math.h>

int main(){
	long long int n,m;
	scanf("%lld %lld", &n, &m);
	printf("%lld",  llabs(n-m));
	return 0;
}
