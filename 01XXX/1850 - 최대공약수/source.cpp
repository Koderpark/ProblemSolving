#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a,b;

ll gcd(ll x, ll y){
	ll n;
	while(y!=0){
		n = x%y;
		x = y;
		y = n;
	}
	return x;
}

int main(){
	ll a,b;
	scanf("%lld %lld", &a, &b);
	ll c = gcd(a,b);
	for(int i=0; i<c; i++) printf("1");
	return 0;
}
