#include <stdio.h>
#include <math.h>

typedef long long int ll;

int main(){
	ll n;
	scanf("%lld", &n);
	ll tmp = (ll)sqrt(n);
	if(tmp*tmp == n) printf("%lld", tmp);
	else printf("%lld", tmp+1);
	return 0;
}
