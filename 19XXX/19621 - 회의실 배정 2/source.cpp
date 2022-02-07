#include <bits/stdc++.h>
using namespace std;

int val[30] = {0};
int dp[30] = {0};

int main(){
	int N,a,b;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a >> b >> val[i];
	}
	
	dp[0] = val[0];
	dp[1] = max(val[0], val[1]);
	
	for(int i=2; i<N; i++){
		dp[i] = max(dp[i-2]+val[i], dp[i-1]);
	}
	
	cout << dp[N-1];
	return 0;
}
/*
연속해서 못더함
dp[i] = i까지 회의 최대
dp[i] = dp[i-2] + val[i] or dp[i-1];
*/
