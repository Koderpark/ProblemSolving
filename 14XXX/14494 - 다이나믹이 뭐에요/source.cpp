#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll dp[1234][1234] = {0};
ll MOD = 1e9+7;

int main(){
	dp[1][1] = 1;
	for(int i=1; i<=1000; i++){
		for(int j=1; j<=1000; j++){
			if(i==1 && j==1) continue;
			dp[i][j] = dp[i-1][j] + dp[i-1][j-1] + dp[i][j-1];
			dp[i][j] %= MOD;
		}
	}
	
	int n,m;
	cin >> n >> m;
	cout << dp[n][m];
	return 0;
}
