#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[123] = {0}; // dp[i] -> i번 눌러서 만들수있는 최댓값. 


int main(){
	dp[1] = 1;
	for(int i=2; i<=100; i++){
		dp[i] = dp[i-1]+1;
		for(int j=1; j<=i-3; j++){
			dp[i] = max(dp[i], dp[j]*(i-j-1));
		}
	}
	
	int N;
	cin >> N;
	cout << dp[N];
	return 0;
}
