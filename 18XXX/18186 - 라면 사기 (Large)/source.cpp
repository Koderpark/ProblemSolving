#include <stdio.h>

typedef long long int ll;

ll ramen[1000010] = {0};
ll cost=0;
ll n,b,c;
ll t;

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
	if(b<c) c=b;
	for(int i=0; i<n; i++) scanf("%lld", &ramen[i]);
	for(int i=0; i<n; i++){
		if(ramen[i+1] > ramen[i+2]){
			t = min(ramen[i],ramen[i+1]-ramen[i+2]);
			ramen[i]-=t;
			ramen[i+1]-=t;
			cost+=(b+c)*t;
			
			t = min(ramen[i],min(ramen[i+1], ramen[i+2]));
			ramen[i]-=t;
			ramen[i+1]-=t;
			ramen[i+2]-=t;
			cost+=(b+c+c)*t;
		}
		else{
			t = min(ramen[i],min(ramen[i+1], ramen[i+2]));
			ramen[i]-=t;
			ramen[i+1]-=t;
			ramen[i+2]-=t;
			cost+=(b+c+c)*t;
			
		 	t = min(ramen[i],ramen[i+1]);
			ramen[i]-=t;
			ramen[i+1]-=t;
			cost+=(b+c)*t;
		}
		cost+=b*ramen[i];
		ramen[i] = 0;
	}
	printf("%lld", cost);
	return 0;
}
