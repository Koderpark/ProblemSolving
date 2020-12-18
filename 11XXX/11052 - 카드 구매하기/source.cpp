#include <stdio.h>

int max(int a, int b){ return a>b?a:b; }

int dp[1234] = {0};
int input[1234] = {0};

int main(){
	int n;
	int tmp = 0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%d", &input[i]);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			dp[i] = max(dp[i], dp[i-j]+input[j]);
		}
	}
	printf("%d", dp[n]);
	return 0;
}
