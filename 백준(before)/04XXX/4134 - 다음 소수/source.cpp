#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool prime(ll k){
	for(ll i=2; i*i<=k; i++){
		if(k%i == 0) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll N,k;
	cin >> N;
	while(N--){
		cin >> k;
		if(k<=2){
			cout << 2 << "\n";
			continue;
		}
		
		if(k%2==0) k++;
		
		for(ll j=k; true; j+=2){
			if(prime(j)){
				cout << j << "\n";
				break;
			}
		}
	}
	return 0;
}
