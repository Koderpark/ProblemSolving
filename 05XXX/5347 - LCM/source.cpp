#include <stdio.h>

typedef long long int ll;

ll gcd(ll a, ll b){
	while(b!=0){
		ll r = a%b;
		a = b;
		b = r;
	}
	return a;
}

ll lcm(ll a, ll b){
	return a*b/gcd(a,b);
}

int main(){
	int n;
	ll a, b;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lld %lld", &a, &b);
		printf("%lld\n", lcm(a,b));
	}
	return 0;
} 
