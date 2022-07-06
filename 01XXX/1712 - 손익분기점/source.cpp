#include <stdio.h>

int main(){
	long long int a,b,c,i=-1;
	scanf("%lld %lld %lld", &a, &b, &c);
	if(c<=b){
		printf("-1");
		return 0;
	}
	printf("%lld", a/(c-b)+1);
	return 0;
}
