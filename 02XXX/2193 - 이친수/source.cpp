#include <stdio.h>

long long int dp[100][2] = {0};

int main(){
	int n;
	dp[1][1] = 1;
	scanf("%d", &n);
	for(int i=2; i<=n; i++){
		dp[i][0] = dp[i-1][0] + dp[i-1][1];
		dp[i][1] = dp[i-1][0];
	}
	printf("%lld", dp[n][0]+ dp[n][1]);
	return 0;
}
