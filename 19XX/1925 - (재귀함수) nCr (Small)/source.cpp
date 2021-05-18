#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int dp[31][31] = {0};

ll nCr(int n, int r){
	if(n==r || r==0) return dp[n][r] = 1;
	if(dp[n][r] != 0) return dp[n][r];
	return dp[n][r] = nCr(n-1,r-1) + nCr(n-1,r);
}

int main(){
	int n,r;
	scanf("%d %d", &n,&r);
	printf("%lld", nCr(n,r));
	return 0;
}
