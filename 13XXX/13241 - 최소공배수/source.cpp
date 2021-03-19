#include <stdio.h>

typedef long long int ll;

ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b, a%b);
}

int main(){
	ll a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", (a*b)/gcd(a,b));
	return 0;
}
