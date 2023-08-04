#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll N;
	cin >> N;
	
	/*
	int dp[100] = {0};
	dp[1] = 1; // 1-상근 0-창영
	dp[2] = 0;
	dp[3] = 1;
	dp[4] = 1;
	for(int i=5; i<=100; i++){
		if(!dp[i-1] || !dp[i-3] || !dp[i-4]) dp[i]=1;
		else dp[i]=0;
	}
	for(int i=1; i<100; i++) cout << dp[i];
	*/
	
	N %= 7;
	if(N == 2 || N == 0) cout << "CY";
	else cout << "SK";
	return 0;
}
