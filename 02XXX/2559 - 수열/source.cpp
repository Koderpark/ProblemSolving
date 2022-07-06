#include <stdio.h>

typedef long long int ll;

int arr[123456] = {0};
ll presum[123456] = {0};

ll max(ll a, ll b){return a>b?a:b;}

int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	for(int i=1; i<=n; i++){
		scanf("%d", &arr[i]);
		presum[i] = presum[i-1] + arr[i];
	}
	
	int ps = 0;
	int pe = k;
	ll ans = -987654321;
	while(pe <= n){
		ans = max(ans, presum[pe]-presum[ps]);
		ps++;
		pe++;
	}
	printf("%lld", ans);
	return 0;
}
