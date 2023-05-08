#include <stdio.h>

int memo[100001] = {0};

int stairs(int n){
	if(n == 0) return 1;
	if(n < 0) return 0;
	if(memo[n] != 0){
		return memo[n];
	}else{
		memo[n] = (stairs(n-1) + stairs(n-2) + stairs(n-3))%1000;
		return memo[n];
	}
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", stairs(n));
}
