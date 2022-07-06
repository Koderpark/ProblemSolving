#include <bits/stdc++.h>
using namespace std;

int w[123] = {0};
int v[123] = {0};
int dp[123][123456] = {0}; // dp i, j => i번째까지 살펴본 배낭의 용량이 j일때 가치의 최대. 

int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	
	for(int i=1; i<=n; i++){
		scanf("%d %d", &w[i], &v[i]);
	}
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=k; j++){
			if(j >= w[i]) dp[i][j] = max(dp[i-1][j-w[i]] + v[i], dp[i-1][j]); // 넣거나 / 넣지 않거나. 
			else          dp[i][j] = dp[i-1][j]; // 아무것도 넣지 않음. 
		}
	}
	
	printf("%d", dp[n][k]);
	return 0;
}
