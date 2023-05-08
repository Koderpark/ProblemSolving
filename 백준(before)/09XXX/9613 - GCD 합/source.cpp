#include <stdio.h>

typedef long long int ll;

int arr[123] = {0};

ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		ll ans = 0;
		scanf("%d", &n);
		for(int i=0; i<n; i++) scanf("%d", &arr[i]);
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				ans += gcd(arr[i], arr[j]);
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
