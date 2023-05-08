#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

map<ll,ll> A;
ll N,P,Q;

ll find(ll x){
	if(A[x] != 0) return A[x];
	A[x] = find(x/P) + find(x/Q);
	return A[x];
}

int main(){
	A[0] = 1;
	cin >> N >> P >> Q;
	cout << find(N) << "\n";
	return 0;
}
