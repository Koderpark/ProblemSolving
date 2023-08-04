#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[50] = {0};
vector<ll> A,B;

ll N,S;
ll ans = 0;

void find(int s, int e, ll sum, int type){
	if(s == e){
		if(type == 1) A.push_back(sum);
		if(type == 2) B.push_back(sum);
		return;
	}
	
	find(s+1, e, sum+arr[s], type);
	find(s+1, e, sum, type);
	return;
}

int main(){
	cin >> N >> S;
	for(int i=0; i<N; i++) cin >> arr[i];
	
	if(N == 1 && arr[0] != S){
		if(arr[0] != S){ cout << 0; return 0; }
		if(arr[0] == S){ cout << 1; return 0; }
	}
	
	find(0,N/2+1,0,1);
	find(N/2+1,N,0,2);
	
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	
	for(int i=0; i<A.size(); i++){
		auto low = lower_bound(B.begin(), B.end(), S-A[i]);
		auto up = upper_bound(B.begin(), B.end(), S-A[i]);
		ans += (ll)(up-low);
	}

	cout << ans - (S==0);
	return 0;
}
