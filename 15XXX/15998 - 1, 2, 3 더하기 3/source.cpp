#include <bits/stdc++.h>
#define MOD 1000000009
using namespace std;

int dp[1234567] = {0};

int main(){
	int n,a;
	scanf("%d", &n);
	
	dp[1] = dp[2] = dp[3] = 1;
	for(int i=1; i<=1000000; i++){
		dp[i+1] = (dp[i+1] + dp[i]) % MOD;
		dp[i+2] = (dp[i+2] + dp[i]) % MOD;
		dp[i+3] = (dp[i+3] + dp[i]) % MOD;
	}
	
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		printf("%d\n", dp[a]);
	}
	return 0;
}
