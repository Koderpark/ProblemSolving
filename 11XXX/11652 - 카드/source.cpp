#include <stdio.h>
#include <algorithm>

using namespace std;
typedef long long int ll;

ll arr[123456] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%lld", &arr[i]);
	
	ll cnt = 1;
	sort(arr,arr+n);
	ll best = arr[0];
	ll bestcnt  = 1;
	for(int i=1; i<n; i++){
		if(arr[i] == arr[i-1]) cnt++;
		else{
			if(bestcnt < cnt){
				bestcnt = cnt;
				best = arr[i-1];
			}
			cnt=1;
		}
	}
	if(bestcnt < cnt) best = arr[n-1];
	printf("%lld", best);
	return 0;
}
