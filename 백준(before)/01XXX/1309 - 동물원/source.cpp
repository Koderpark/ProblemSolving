#include <bits/stdc++.h>
#define MOD 9901
using namespace std;

int dp[3][123456] = {0};

int main(){
	int n;
	scanf("%d", &n);
	
	dp[0][0] = 1; // 배치하지않음 
	dp[1][0] = 1; // 오른쪽 배치 
	dp[2][0] = 1; // 왼쪽 배치
	
	for(int i=1; i<=n; i++){
		dp[0][i] = (dp[0][i-1] + dp[1][i-1] + dp[2][i-1]) % MOD;
		dp[1][i] = (dp[0][i-1] + dp[2][i-1]) % MOD;
		dp[2][i] = (dp[0][i-1] + dp[1][i-1]) % MOD;
	}
	printf("%d", (dp[0][n-1]+dp[1][n-1]+dp[2][n-1]) % MOD);
	return 0;
}
