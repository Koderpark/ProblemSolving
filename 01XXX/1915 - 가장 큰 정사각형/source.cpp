#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int dp[1234][1234] = {0};
int arr[1234][1234] = {0};


int main(){
	int n,m;
	int ans = 0;
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			scanf("%1d", &dp[i][j]);
			if(dp[i][j]){
				dp[i][j] += min({
					dp[i-1][j-1],
					dp[i-1][j],
					dp[i][j-1]
				});
				ans = max(ans, dp[i][j]);
			}
		}
	}
	printf("%d", ans * ans);
	return 0;
}
