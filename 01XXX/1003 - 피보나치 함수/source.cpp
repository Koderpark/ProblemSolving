#include <stdio.h>

int zero=0;
int one=0;

int fibonacci(int n) {
    if (n == 0)zero++;
	if (n == 1)one++;
	if(n==0||n==1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int t,n;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		zero = one = 0;
		scanf("%d", &n);
		fibonacci(n);
		printf("%d %d\n", zero,one);
	}
	return 0;
}
