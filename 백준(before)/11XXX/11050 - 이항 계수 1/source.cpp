#include <stdio.h>

int f(int a){
	if(a == 0 || a == 1) return 1;
	return f(a-1) * a;
}

int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	printf("%lld", f(n)/(f(k)*f(n-k)));
	return 0;
}
