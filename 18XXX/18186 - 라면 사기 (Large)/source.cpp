#include <stdio.h>

typedef long long int ll;

ll ramen[1000010] = {0};
ll cost=0;
ll n,b,c;

ll min(ll a, ll b){return a>b?b:a;}

void three(ll k){
	ll t = min(ramen[k],min(ramen[k+1], ramen[k+2]));
	ramen[k]-=t;
	ramen[k+1]-=t;
	ramen[k+2]-=t;
	cost+=(b+2*c)*t;
}

void two(ll k){
	ll t = min(ramen[k],ramen[k+1]);
	ramen[k]-=t;
	ramen[k+1]-=t;
	cost+=(b+c)*t;
}

void one(ll k){ cost+=b*ramen[k]; }


int main(){
	scanf("%lld %lld %lld", &n, &b, &c);
	for(int i=0; i<n; i++) scanf("%lld", &ramen[i]);
	for(int i=0; i<n; i++){
		if(ramen[i+1] > ramen[i+2]){
			ll k = min(ramen[i],ramen[i+1]-ramen[i+2]);
			ramen[i]-=k;
			ramen[i+1]-=k;
			cost+=(b+c)*k;
			
			three(i);
			one(i);
		}
		else { three(i); two(i); one(i); }
	}
	printf("%lld", cost);
	return 0;
}
