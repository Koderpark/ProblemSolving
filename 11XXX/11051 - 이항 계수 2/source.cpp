#include <stdio.h>

#define MOD 10007

int memoi[1234][1234] = {0};

int f(int n, int k){
	if(n<0 || k<0) return 0;
	
	if(memoi[n][k] != 0) return memoi[n][k] % MOD;
	if(n == k) return memoi[n][k] = 1;
	if(k == 0) return memoi[n][k] = 1;
	
	return memoi[n][k] = f(n-1,k-1) + f(n-1,k) % MOD;
}

int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	printf("%d", f(n,k)%MOD);
	return 0;
}
