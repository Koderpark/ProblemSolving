#include <stdio.h>

long long int nCr(int a, int b){
	long long int n=1; 
	for(int i=b; i>=b-a+1; i--) n=n*i;
	for(int j=a; j>=1; j--) n=n/j; 
	return(n);
}

int main(){
	int t,a,b;
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		scanf("%d %d",&a, &b);
		printf("%lld\n", nCr(a,b));
	}
	return 0;
}
