#include <stdio.h>

int main(){
	long long int r1, r2, r3;
	scanf("%lld %lld %lld", &r1, &r2, &r3);
	printf("%.10lf", (double)(r1*r2*r3)/(r1*r2 + r2*r3 + r1*r3));
	return 0;
}
