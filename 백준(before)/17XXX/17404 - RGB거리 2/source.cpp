#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

int arr[1234][3] = {0};
int dp[1234][3] = {0};
int ans = INF;

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
	
	for(int color=0; color<=2; color++){
		for(int i=0; i<=2; i++){
			if(i==color) dp[1][i] = arr[1][i];
			else         dp[1][i] = INF;
		}
		
		for(int i=2; i<=n; i++){
			dp[i][0] = arr[i][0] + min(dp[i-1][1], dp[i-1][2]);
			dp[i][1] = arr[i][1] + min(dp[i-1][0], dp[i-1][2]);
			dp[i][2] = arr[i][2] + min(dp[i-1][0], dp[i-1][1]);
		}
		
		for(int i=0; i<=2; i++){
			if(i!=color) ans = min(ans, dp[n][i]);
		}
	}
	printf("%d", ans);
	return 0;
}
