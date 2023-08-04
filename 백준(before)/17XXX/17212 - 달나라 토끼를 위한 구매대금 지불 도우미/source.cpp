#include <bits/stdc++.h>
using namespace std;

int dp[123456] = {0};

int main(){
	for(int i=0; i<123456; i++) dp[i] = 998244353;
	
	dp[0] = 0;
	
	for(int i=0; i<=100000; i++){
		dp[i+1] = min(dp[i]+1, dp[i+1]);
		dp[i+2] = min(dp[i]+1, dp[i+2]);
		dp[i+5] = min(dp[i]+1, dp[i+5]);
		dp[i+7] = min(dp[i]+1, dp[i+7]);
	}
	
	int N;
	cin >> N;
	cout << dp[N];
	return 0;
}
