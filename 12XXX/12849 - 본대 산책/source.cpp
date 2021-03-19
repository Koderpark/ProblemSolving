#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;
typedef long long int ll;

ll dp[8] = {1,0,0,0,0,0,0,0};

void f(){
	ll arr[8] = {0};
	
	arr[0] = dp[1] + dp[2];
	arr[1] = dp[0] + dp[2] + dp[3];
	arr[2] = dp[0] + dp[1] + dp[3] + dp[4];
	arr[3] = dp[1] + dp[2] + dp[4] + dp[5];
	arr[4] = dp[2] + dp[3] + dp[5] + dp[7];
	arr[5] = dp[3] + dp[4] + dp[6];
	arr[6] = dp[5] + dp[7];
	arr[7] = dp[4] + dp[6];
	
	for(int i=0; i<8; i++) arr[i] %= MOD;
	for(int i=0; i<8; i++) dp[i] = arr[i];
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++) f();
	printf("%lld", dp[0]);
	return 0;
}
