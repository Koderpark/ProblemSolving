#include <bits/stdc++.h>
#define MOD 1000000007LL
using namespace std;
typedef long long int ll;


ll f(ll a, ll b){
	if(b==1)   return a;
	if(b%2) return (a*f(a,b-1)) % MOD;
	
	ll tmp = f(a, b/2);
	return (tmp*tmp) % MOD;
}

int main(){
	ll ans = 0;
	
	int k;
	scanf("%d", &k);
	while(k--){
		ll n,s;
		scanf("%lld %lld", &n, &s);
		
		ll tmp = __gcd(n,s);
		n/=tmp;;
		s/=tmp;
		
		ans += (s*f(n, MOD-2)) % MOD;
		ans %= MOD;
	}
	printf("%lld", ans);
	return 0;
}
