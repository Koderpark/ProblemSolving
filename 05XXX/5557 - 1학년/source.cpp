#include <stdio.h>
#include <string.h>

typedef long long int ll;

ll n;
ll arr[123];
ll res;

ll dp[123][123] = {0};

ll f(ll idx, ll sum){
	if(sum<0 || sum>20)   return 0;
	if(idx == n-2){
		if(sum == arr[n-1]) return dp[idx][sum] = 1;
		else           return dp[idx][sum] = 0;
	}
	if(dp[idx][sum] != -1) return dp[idx][sum];
	
	ll tmp = 0;
	tmp = (tmp + f(idx+1, (ll)sum+arr[idx+1]));
	tmp = (tmp + f(idx+1, (ll)sum-arr[idx+1]));
	
	return dp[idx][sum] = tmp;
}

int main(){
	scanf("%lld", &n);
	for(int i=0; i<n; i++) scanf("%lld", &arr[i]);
	
	memset(dp, -1, sizeof(dp));
	
	printf("%lld", f(0, arr[0]));
	return 0;
}
