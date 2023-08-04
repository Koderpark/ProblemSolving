#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> A;
vector<ll> B;

ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int main(){
	ll N,k;
	
	cin >> N;
	while(N--){
		cin >> k;
		A.push_back(k);
	}
	
	cin >> N;
	while(N--){
		cin >> k;
		B.push_back(k);
	}
	
	ll ans = 1;
	bool flag = false;
	for(int i=0; i<A.size(); i++){
		for(int j=0; j<B.size(); j++){
			ll tmp = gcd(A[i],B[j]);
			ans *= tmp;
			A[i] /= tmp;
			B[j] /= tmp;
			if(ans >= 1000000000LL) flag = true;
			ans %= 1000000000LL;
		}
	}
	
	if(flag) printf("%09d", ans);
	else printf("%d", ans);
	return 0;
}
