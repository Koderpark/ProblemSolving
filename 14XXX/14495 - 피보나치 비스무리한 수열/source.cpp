#include <stdio.h>

long long int fibo[123] = {0};

int main(){
	int n;
	scanf("%d", &n);
	fibo[1] = fibo[2] = fibo[3] = 1;
	for(int i=4; i<=n; i++){
		fibo[i] = fibo[i-1] + fibo[i-3];
	}
	printf("%lld", fibo[n]);
	return 0;
}
