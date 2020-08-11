#include <stdio.h>

int max(int a, int b){ return a>b?a:b; }

int main(){
	int n;
	int input[301], dp[301] = {0};
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%d", &input[i]);
	
	
	dp[1] = input[1];
	dp[2] = dp[1] + input[2]; // max(0, dp[1])의 결과는 항상 dp[1]이므로 생략 
	for(int i=3; i<=n; i++){
		dp[i] = input[i] + max(input[i-1]+dp[i-3], dp[i-2]); 
	}
	printf("%d", dp[n]);
	return 0;
}
