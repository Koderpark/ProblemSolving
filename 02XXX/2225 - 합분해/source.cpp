#include <bits/stdc++.h>
#define MOD 1000000000
using namespace std;

int dp[512][512] = {0};

int nCr(int n, int r){
	if(n==r) return dp[n][r] = 1;
	if(r==0) return dp[n][r] = 1;
	
	if(dp[n][r] != 0) return dp[n][r] % MOD;
	return dp[n][r] = (nCr(n-1,r-1) + nCr(n-1,r)) % MOD;
}

int main(){
	int n,r;
	scanf("%d %d", &n, &r);
	nCr(n+r-1, r-1);
	printf("%d", dp[n+r-1][r-1] % MOD);
	return 0;
}
