#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll cnt[60] = {0}; // cnt[k] -> 비트k개 범위에서 (0~2^k-1) 1의 개수의 합
ll ncr[60][60] = {0};

ll nCr(ll n, ll r){
	if(ncr[n][r] != 0) return ncr[n][r];
	if(n==r || r==0) return 1;
	return ncr[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}

ll prefix(ll K){
	ll ret = K%2;
	
	for(ll i=59; i>0; i--){
		if(K & (1LL << i)){
			ret += cnt[i] + (K-(1LL<<i)+1);
			K -= 1LL << i;
		}
	}
	
	return ret;
}

int main(){
	for(ll i=1; i<=55; i++){
		for(ll j=1; j<=i; j++){
			cnt[i] += nCr(i,j)*j;
		}
	}
	
	ll S,E;
	cin >> S >> E;
	cout << prefix(E)-prefix(S-1);
	return 0;
}
