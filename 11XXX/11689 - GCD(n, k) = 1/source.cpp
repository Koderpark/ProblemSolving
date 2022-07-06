#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

map<ll,ll> prime;

int main(){
	ll n;
	ll ans = 1;
	scanf("%lld", &n);
	if(n==1){ printf("1"); return 0; }
	
	ll k = 2;
	while(k*k <= n){
		if(n%k == 0){
			prime[k]++;
			n /= k;
			continue;
		}
		k++;
	}
	prime[n]++;
	
	for(auto it=prime.begin(); it!=prime.end(); it++){ ans *= ((ll)pow(it->first, it->second) - (ll)pow(it->first, it->second-1)); }
	printf("%lld", ans);
	return 0;
} 
