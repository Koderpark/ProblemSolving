#include <stdio.h>

int dp[10005]  = {0};
int arr[10005] = {0};
int max(int a, int b){ return a>b?a:b; } 

int main(){
	int n;
	scanf("%d", &n);
	for(int i=3; i<n+3; i++) scanf("%d", &arr[i]);
	for(int i=3; i<n+3; i++){
		dp[i] = max(dp[i-1], max(dp[i-3]+arr[i-1]+arr[i], dp[i-2]+arr[i]));
	}
	printf("%d", dp[n+2]);
	return 0;
} 
