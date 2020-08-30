#include <stdio.h>

typedef long long int ll;

int main(){
	ll R,r;
	scanf("%lld %lld", &R, &r);
	printf("%lld", R*(R-2*r));
	return 0;
}
