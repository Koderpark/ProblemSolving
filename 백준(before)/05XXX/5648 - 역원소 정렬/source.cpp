#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> v;

ll rev(ll k){
	ll ans = 0;
	while(k){
		ans *= 10;
		ans += k%10;
		k/=10;
	}
	return ans;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll N,a;
	cin >> N;
	while(N--){
		cin >> a;
		v.push_back(rev(a));
	}
	
	sort(v.begin(), v.end());
	for(auto k : v){
		cout << k << "\n";
	}
	return 0;
}
