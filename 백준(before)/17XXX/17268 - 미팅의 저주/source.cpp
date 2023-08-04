#include <bits/stdc++.h>
#define MOD 987654321
using namespace std;
typedef long long ll;

ll dp[12345] = {0};

int main(){
	int N;
	cin >> N;
	
	dp[0] = 1;
	for(int i=1; i<=N; i++){
		for(int j=0; j<i; j++){
			dp[i] += (dp[j]*dp[i-j-1]);
			dp[i] %= MOD;
		}
	}
	
	cout << dp[N/2];
	return 0;
}
