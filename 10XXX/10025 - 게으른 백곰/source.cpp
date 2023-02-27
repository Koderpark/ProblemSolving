#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int ice[1234567] = {0};
ll prefix[1234567] = {0};

vector<int> pos;

ll vleft(int pos){
	if(pos <= 0) return 0;
	return prefix[pos-1];
}

ll vright(int pos){
	if(pos > 1000000) return prefix[1000000];
	return prefix[pos];
}

int main(){
	int N,K,a,b;
	cin >> N >> K;
	
	for(int i=0; i<N; i++){
		cin >> a >> b;
		ice[b] = a;
	}
	
	
	prefix[0] = ice[0];
	for(int i=1; i<=1000000; i++){
		prefix[i] = prefix[i-1] + ice[i];
	}
	
	ll ans = -1;
	for(int i=0; i<=1000000; i++){
		ll left = vleft(i-K);
		ll right = vright(i+K);
		
		if(ans < right-left){
			ans = right-left;
		}
	}
	
	cout << ans;
	
	return 0;
}
