#include <stdio.h>

#define PRESUM prefix[p2]-prefix[p1-1]

typedef long long int ll;

ll arr[345678] = {0};
ll prefix[345678] = {0};


int main(){
	ll n,m;
	int ans = 0;
	
	scanf("%lld %lld", &n, &m);
	
	for(int i=1; i<=n; i++){
		scanf("%lld", &arr[i]);
		prefix[i] = prefix[i-1] + arr[i];
	}
	
	for(int p1=1; p1<=n; p1++){
		for(int p2=p1; p2<=n; p2++){
			if(PRESUM == m){
				ans++;
			}
		}
	}
	
	printf("%d", ans);
	return 0;
}
