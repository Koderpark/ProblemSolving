#include <stdio.h>

int input[100001] = {0};
int dp[100001] = {0};

int max(int a, int b){ return a>b?a:b; }

int main(){
	int n,value = -1234;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &input[i]);
	
	dp[0] = input[0];
	for(int i=0; i<n; i++){
		dp[i+1] = max(dp[i]+input[i+1], input[i+1]);
	}
	
	for(int i=0; i<n; i++) value = max(value, dp[i]);
	printf("%d", value);
	return 0;
}
