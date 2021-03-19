#include <stdio.h>

typedef unsigned long long int ll;
ll a,b,m;

ll multiple(ll k, ll t){
	if(t==0) return 1LL;
	if(t==1) return k;
	
	ll tmp = multiple(k, t/2);
	ll ans = tmp * tmp % m;
	
	if(t%2==0) return ans;
	else	   return ans*k % m;
}

int main(){
	scanf("%lld %lld %lld", &a, &b, &m);
	printf("%lld", multiple(a%m,b) % m);
	return 0;
}
