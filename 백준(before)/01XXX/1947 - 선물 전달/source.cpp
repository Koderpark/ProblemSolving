#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[1234567] = {0};

int main(){
	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	for(int i=3; i<=1000000; i++){
		dp[i] = (dp[i-1]+dp[i-2])*(i-1) % 1000000000LL;
	}
	
	int N;
	cin >> N;
	cout << dp[N];
	
	return 0;
}
