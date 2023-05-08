#include <stdio.h>

long long int f(long long int n){
	if(n == 0) return 0;
	return f(n/10) + n%10;
}

int main(){
	long long int n;
	scanf("%lld", &n);
	printf("%d", f(n));
	return 0;
}
