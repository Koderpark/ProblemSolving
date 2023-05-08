#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll N;

ll search(ll s, ll e){
	ll mid = (s+e)/2;
	ll K = mid*mid;
	
	//cout << "[" << K << "]";
	
	if(s==e) return s;
	
	if(K < N){
		return search(mid+1,e);
	}
	return search(s,mid);
}

int main(){
	cin >> N;
	cout << search(0LL, 4294967295LL);
	return 0;
}
