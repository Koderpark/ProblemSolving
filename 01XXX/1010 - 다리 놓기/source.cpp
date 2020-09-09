#include <stdio.h>
typedef long long int ll;

ll nCr(ll n, ll r){
	ll sum = 1;
	for(int i=0; i<r;  i++){
		sum*=(n-i);
		sum/=(i+1);
	}
	return sum;
}

int main(){
	int n,m,t;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d", &n, &m);
		printf("%lld\n", nCr(m,n));
	}
	return 0;
}
