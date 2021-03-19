#include <stdio.h>

int fact(int n, long long int sum=1){
	if(!n) return sum;
	sum*=n;
	return fact(--n,sum);
}

int main(){
	int n,r;
	scanf("%d %d", &n, &r);
	printf("%lld", fact(n) / fact(n-r) / fact(r));
	return 0;
}
