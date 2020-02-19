#include <stdio.h>

long long int memo[91] = {0};

long long int fibo(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	if(memo[n] != 0) return memo[n];
	else return memo[n] = fibo(n-1) + fibo(n-2);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%lld", fibo(n));
	return 0;
}
