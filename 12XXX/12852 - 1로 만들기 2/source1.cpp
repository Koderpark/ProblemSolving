#include <bits/stdc++.h>
#define INF 998244353
using namespace std;

int dp[3456789] = {0};

int main(){
	for(int i=0; i<3456789; i++) dp[i] = INF;
	
	int N;
	cin >> N;
	dp[1] = 1;
	for(int i=1; i<=N; i++){
		dp[i*3] = min(dp[i*3], dp[i]+1);
		dp[i*2] = min(dp[i*2], dp[i]+1);
		dp[i+1] = min(dp[i+1], dp[i]+1);
	}
	
	cout << dp[N]-1 << "\n";
	
	int ptr = dp[N];
	int prev = N+1;
	for(int i=N; i>=1; i--){
		//printf("[%d : %d %d]", i, dp[i], ptr);
		if(dp[i] == ptr && (i*3==prev || i*2==prev || i+1==prev)){
			ptr--;
			prev = i;
			cout << i << " ";
		}
	}
	return 0;
}
