#include <bits/stdc++.h>
#define MOD 1000000000
using namespace std;

typedef long long ll;

ll dp[123][12][1<<11];
ll n,ans = 0;

ll f(ll len, ll now, ll bit){
	if(0>now || now>9) return 0;
	
	if(len == n){
		if(bit == (1<<10)-1) return 1;
		else return 0;
	}
	
	if(dp[len][now][bit] != -1) return dp[len][now][bit];
	dp[len][now][bit] = (f(len+1,now+1,bit|(1<<(now+1))) + f(len+1,now-1,bit|(1<<(now-1)))) % MOD;
	return dp[len][now][bit];
}

int main(){
	memset(dp, -1, sizeof(dp));
	scanf("%lld", &n);
	for(int i=1; i<10; i++) ans = (ans + f(1,i,1<<i)) % MOD;
	printf("%lld", ans);
	return 0;
}
