#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[70] = {0};


int main(){
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for(int i=4; i<=67; i++) dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4];
	
	int t,N;
	cin >> t;
	while(t--){
		cin >> N;
		cout << dp[N] << "\n";
	}
	return 0;
}
