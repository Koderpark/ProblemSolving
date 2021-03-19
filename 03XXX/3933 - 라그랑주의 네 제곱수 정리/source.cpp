#include <stdio.h>

typedef long long int ll;

int main(){
	ll n,tmp,ans=0;
	while(1){
		ans=0;
		scanf("%lld", &n);
		if(n==0) break;
		for(ll i=0; i*i <= n; i++){
			for(ll j=i; i*i + j*j <=n; j++){
				for(ll k=j; i*i + j*j + k*k <=n; k++){
					for(ll l=k; i*i + j*j + k*k + l*l <= n; l++) if(i*i+j*j+k*k+l*l==n) ans++;
				}
			}
		}	
		printf("%lld\n", ans);
	}
	return 0;
}
