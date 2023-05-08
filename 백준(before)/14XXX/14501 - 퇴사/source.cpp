#include <stdio.h>

int dp[101] = {0};
int t[101] = {0};
int p[101] = {0};

int max(int a, int b){ return a>b?a:b; }

int main(){
	int n;
	int ans=0;
	scanf("%d", &n);
	for(int i=0; i< n; i++) scanf("%d %d", &t[i], &p[i]);
	for(int i=0; i< n; i++){
		dp[i+t[i]] = max(dp[i+t[i]], dp[i] + p[i]);
		dp[i+1] = max(dp[i+1], dp[i]);
	}
	for(int i=0; i<=n; i++) ans = max(ans, dp[i]);
	printf("%d", ans);
	return 0;
}
