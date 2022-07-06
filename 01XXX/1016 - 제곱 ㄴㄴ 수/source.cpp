#include <stdio.h>
#include <math.h>
#define ll long long int

bool chk[1000001] = {0};

int main(){
	ll min,max;
	ll sum = 0;
	scanf("%lld %lld", &min, &max);
	sum = max - min + 1;
	for(ll i=2; i*i<=max; i++){
		for(ll j=min/(i*i); i*i*j<=max; j++){
			if(min <= i*i*j){
				if(chk[i*i*j-min] == 0){
					chk[i*i*j-min] = 1;
					sum--;
				}
			}
		}
	}
	printf("%lld", sum);
	return 0;
}
