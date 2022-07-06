#include <bits/stdc++.h>
using namespace std;

int dp[34567] = {0};

int main(){
	int n;
	scanf("%d", &n);
	
	dp[1] = 2;
	for(int i=2; i<=n; i++){
		dp[i] = dp[i-1] + i;
		dp[i]  %= 137;
	}
	printf("%d", dp[n] % 137);
	return 0;
}
