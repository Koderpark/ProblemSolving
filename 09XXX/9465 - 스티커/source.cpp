#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int dp[2][123456] = {0};
int a[123456] = {0};
int b[123456] = {0};

int main(){
	int t;
	int n;
	scanf("%d", &t);
	while(t--){
		memset(dp,0,sizeof(dp));
		scanf("%d", &n);
		for(int i=1; i<=n; i++) scanf("%d", &a[i]);
		for(int i=1; i<=n; i++) scanf("%d", &b[i]);
		
		dp[0][1] = a[1];
		dp[1][1] = b[1];
		for(int i=2; i<=n; i++){
			dp[0][i] = max(dp[1][i-1], dp[1][i-2]) + a[i];
			dp[1][i] = max(dp[0][i-1], dp[0][i-2]) + b[i];
		}
		printf("%d\n", max(dp[0][n], dp[1][n]));
	}
	return 0;
}
