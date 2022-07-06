#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

map<ll,ll> p;

int main(){
	ll n;
	while(1){
		p.clear();
		scanf("%lld", &n);
		if(n==0) break;
		if(n==1){ printf("1"); continue; }
		
		ll k=2;
		while(k*k<=n){
			if(n%k == 0){
				p[k]++;
				n /= k;
				continue;
			}
			k++;
		}
		p[n]++;
		
		ll ans = 1;
		for(auto it=p.begin(); it != p.end(); it++){
			ans *= ((ll)pow(it->first, it->second) - (ll)pow(it->first, it->second-1));
		}
		printf("%lld\n", ans);
	}
	return 0;
}
