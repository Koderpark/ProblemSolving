#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

map<ll,ll> prime;
vector<ll> v;

int main(){
	ll n;
	scanf("%lld", &n);
	if(n==1){
		printf("1");
		return 0;
	}
	
	for(ll i=1; i*i<=n; i++){
		if(n%i == 0){
			v.push_back(n/i);
			v.push_back(i);
		}
	}
	
	for(int i=0; i<v.size(); i++){
		prime.clear();
		ll ans = 1;
		ll tmp = 2;
		ll val = v[i];
		while(tmp*tmp <= val){
			if(val%tmp == 0){
				prime[tmp]++;
				val /= tmp;
				continue;
			}
			tmp++;
		}
		prime[val]++;
		
		for(auto it=prime.begin(); it!=prime.end(); it++){
			ans *= ((ll)pow(it->first, it->second) - (ll)pow(it->first, it->second-1));
		}
		if(ans * v[i] == n){
			printf("%lld", v[i]);
			return 0;
		}
	}
	printf("-1");
	return 0;
}
