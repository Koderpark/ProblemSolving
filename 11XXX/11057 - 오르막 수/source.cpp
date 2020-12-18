#include <stdio.h>

int dp[1234][11] = {0};

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<10; i++) dp[1][i] = 1;
	for(int i=2; i<=n; i++){
		for(int j=0; j<=9; j++){
			for(int k=j; k<=9; k++){
				dp[i][k] =(dp[i][k] + dp[i-1][j]) % 10007;
			}
		}
	}
	int ans = 0;
	for(int i=0; i<10; i++) ans += dp[n][i];
	printf("%d", ans%10007);
	return 0;
}
