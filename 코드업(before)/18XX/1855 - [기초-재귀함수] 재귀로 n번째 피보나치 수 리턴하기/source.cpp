#include <stdio.h>

int f(int n){
	if(n < 3) return 1;
	return f(n-2)+f(n-1);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%lld", f(n));
	return 0;
}
