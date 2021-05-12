#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long int ll;

ll f(ll k, ll t){
	if(t==1) return k;
	if(t%2) return k * f(k, t-1) % MOD;
	
	ll tmp = f(k,t/2);
	return tmp*tmp % MOD;
}

int main(){
	int n,r;
	ll a=1, b=1, c=1;
	
	scanf("%d %d", &n, &r);
	for(ll i=1; i<=n;   i++){ a *= i; a %= MOD; }
	for(ll i=1; i<=r;   i++){ b *= i; b %= MOD; }
	for(ll i=1; i<=n-r; i++){ b *= i; b %= MOD; }
	
	ll tmp = f(b, MOD-2) % MOD;
	ll ans = a * tmp % MOD;
	printf("%lld", ans);
	return 0;
}
