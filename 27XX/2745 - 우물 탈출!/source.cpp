#include <stdio.h>

int main(){
	long long int a,b,c;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%d", (a-b)/(b-c));
	return 0;
}
/*

(b-c)*x + b >= a

b-c*x >= a-b
x >= a-b/b-c*/
