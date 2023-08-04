#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f[1234567] = {0};
ll g[1234567] = {0};

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	for(ll i=1; i<=1000000; i++){
		for(ll j=i; j<=1000000; j+=i){
			f[j] += i;
		}
	}
	
	for(int i=1; i<=1000000; i++){
		g[i] = g[i-1] + f[i];
	}
	
	int N,k;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> k;
		cout << g[k] << "\n";
	}
	return 0;
}
