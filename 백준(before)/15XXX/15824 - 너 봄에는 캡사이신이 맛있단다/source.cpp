#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long int ll;

int arr[345678] = {0};
ll pow2[345678] = {0};

int main(){
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	sort(arr, arr+N);
	
	pow2[0] = 1;
	for(int i=1; i<=300000; i++){
		pow2[i] = pow2[i-1]*2 % MOD;
	}
	
	ll ans = 0;
	for(int i=0; i<N; i++){
		ans += arr[i] * (pow2[i] + MOD - pow2[N-i-1]) % MOD;
		ans %= MOD;
	}
	
	cout << ans << "\n";
	return 0;
} 
