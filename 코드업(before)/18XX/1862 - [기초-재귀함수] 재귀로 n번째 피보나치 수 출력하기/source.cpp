#include <stdio.h>

int memoi[101] = {0};

int fibo(int n){
	if(memoi[n] != 0) return memoi[n];
	else if(n <= 2) return 1;
	else return memoi[n] = (fibo(n-2) + fibo(n-1))%1000000007;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));
	return 0;
}
