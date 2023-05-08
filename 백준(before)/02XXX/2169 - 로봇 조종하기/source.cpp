#include <stdio.h>

int max(int a, int b){ return a>b?a:b; }

int n,m;
int input[1001][1001] = {0};
int dp[1001][1001]	  = {0};
int tmpr[1001] 	      = {0};
int tmpl[1001] 	      = {0};

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) scanf("%d", &input[i][j]);
	
	dp[1][1] = input[1][1];
	for(int i=2; i<=m; i++) dp[1][i] += input[1][i] + dp[1][i-1];
	
	for(int i=2; i<=n; i++){
		tmpr[0] =   dp[i-1][1];
		tmpl[m+1] = dp[i-1][m];
		for(int j=1; j<=m; j++) tmpr[j] = max(tmpr[j-1], dp[i-1][j]) + input[i][j];
		for(int j=m; j>=1; j--) tmpl[j] = max(tmpl[j+1], dp[i-1][j]) + input[i][j];
		
		for(int j=1; j<=m; j++) dp[i][j] = max(tmpr[j], tmpl[j]);
	}
	printf("%d\n", dp[n][m]);
	return 0;
}
