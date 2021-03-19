#include <stdio.h>
#include <algorithm>

using namespace std;

typedef long long int ll;

ll max(ll a,ll b){return a>b?a:b;}

ll arr[543210] = {0};

int main(){
	ll n;
	ll ans=-1;
	
	scanf("%lld", &n);
	for(int i=0; i<n; i++) scanf("%lld", &arr[i]);
	
	sort(arr, arr+n);
	
	for(int i=n-7; i>=0; i--){
		ll sum1 = arr[i]+arr[i+1]+arr[i+2]+arr[i+3];
		for(int j=i+4; j<=n-2; j++){
			ll sum2 = arr[j]+arr[j+1];
			for(int k=j+2; k<=n-1; k++){
				ll sum3 = arr[k];
				if(sum3 < sum2 && sum2 < sum1){
					ans = sum3+sum2+sum1;
					goto end;
				}
			}
		}
	}
	end:
	printf("%lld", ans);
	return 0;
}
