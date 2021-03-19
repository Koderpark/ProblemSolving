#include <stdio.h>

int memoi[1000001] = {0};

int f(int n){
	if(memoi[n] != 0) return memoi[n];
	if(n==0) 		  return 1;
	if(n< 0) 		  return 0;
	memoi[n] = (f(n-1) + f(n-2))%15746;
	return memoi[n];
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
	return 0;
}
