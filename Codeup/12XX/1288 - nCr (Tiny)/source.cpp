#include <stdio.h>

int factorial(int n){
	int res,i;
	if(n == 0) return 1;
	if(n == 1) return n;
	else{
		res = n;
		for(i=n-1; i>0; i--) res*=i;
		return res;
	}
}

int main(){
	int n,r;
	scanf("%d %d", &n, &r);
	printf("%d", factorial(n)/(factorial(r)*factorial(n-r)));
	return 0;
}
