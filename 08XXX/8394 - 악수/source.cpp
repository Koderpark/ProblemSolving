#include <bits/stdc++.h>
using namespace std;

int dp[12345678] = {0}; 

int main(){
	int N;
	cin >> N;
	
	dp[1] = 1;
	dp[2] = 2;
	for(int i=3; i<=N; i++){
		dp[i] = dp[i-1] + dp[i-2];
		dp[i] %= 10;
	}
	
	cout << dp[N];
	
	return 0;
}
