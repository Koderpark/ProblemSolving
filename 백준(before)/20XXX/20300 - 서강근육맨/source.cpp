#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

vector<ll> in;
vector<ll> v;

int main(){
	ll N,a;
	
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a;
		in.push_back(a);
	}
	
	sort(in.begin(), in.end());
	
	
	if(N%2) v.push_back(in[--N]);
	
	for(int i=0; i<N/2; i++){
		v.push_back(in[i]+in[N-i-1]);
	}
	
	ll ans = 0;
	for(auto k : v) ans = max(ans, k);
	cout << ans;
	return 0;
}
