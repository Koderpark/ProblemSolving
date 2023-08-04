#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

set<ll> s;

bool prime(ll k){
	for(ll i=2; i*i<=k; i++){
		if(k % i == 0) return false;
	}
	return true;
} 

int main(){
	ll N,K;
	cin >> N;
	
	ll ans = 1;
	
	for(int i=0; i<N; i++){
		cin >> K;
		s.insert(K);
	}
	
	for(auto k : s){
		if(prime(k)) ans *= k;
	}
	
	if(ans == 1){
		cout << -1;
		return 0;
	}
	
	cout << ans;
	return 0;
}
