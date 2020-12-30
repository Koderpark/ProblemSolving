#include <stdio.h>

typedef long long int ll;

ll nCr(ll n, ll r){
	if(r==0) return 1;
	if(n==r) return 1;
	return nCr(n-1,r-1) + nCr(n-1,r);
}

int main(){
	int n,r;
	scanf("%d %d", &n, &r);
	printf("%lld", nCr(n-1,r-1));
	return 0;
}
