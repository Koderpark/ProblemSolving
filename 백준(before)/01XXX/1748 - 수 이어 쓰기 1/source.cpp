#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	long long int sum=0;
	int i=1;
	while(i<=n){
		sum += (n-i+1);
		i*=10;
	}
	printf("%lld", sum);
	return 0;
}
