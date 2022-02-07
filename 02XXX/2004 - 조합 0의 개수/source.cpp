#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll two(ll k){
	ll ans = 0;
	for(ll i=2; i<=k; i*=2){
		ans += k/i;
	}
	return ans;
}

ll five(ll k){
	ll ans = 0;
	for(ll i=5; i<=k; i*=5){
		ans += k/i;
	}
	return ans;
}

int main(){
	ll n,m;
	cin >> n >> m;
	
	ll cnt_two  = two(n)  - (two(n-m)  + two(m));
	ll cnt_five = five(n) - (five(n-m) + five(m));
	
	cout << min(cnt_two, cnt_five);
	return 0;
}
