#include <stdio.h>

typedef long long int ll;

int main(){
	ll s,sum=0,chk=0;
	scanf("%lld", &s);
	for(int i=1; sum<=s; i++){ sum+=i; chk++; }
	printf("%d", sum==s?chk:chk-1);
	return 0;
}
