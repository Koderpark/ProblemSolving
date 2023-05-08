#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[123][12] = {0};

ll f(ll x, ll y){
	if(!(0<=y && y<=9)) return 0;
	if(dp[x][y] != -1) return dp[x][y];
	
	dp[x][y] = 0;
	for(int i=0; i<=y; i++) dp[x][y] += f(x-1,i);
	return dp[x][y];
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	memset(dp,-1,sizeof(dp));
	for(int i=0; i<10; i++) dp[1][i] = 1;
	
	int t,k;
	cin >> t;
	while(t--){
		cin >> k;
		
		ll ans = 0;
		for(int i=0; i<10; i++) ans += f(k,i);
		cout << ans << "\n";
	}
	return 0;
}
