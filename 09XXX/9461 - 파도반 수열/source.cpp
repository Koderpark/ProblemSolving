#include <stdio.h>

long long int memoi[101] = {0};

long long int f(int n){
	if(memoi[n] != 0) 	 return memoi[n];
	if(n==1||n==2||n==3) return 1;
	if(n<=0)			 return 0;	
	memoi[n] = f(n-2) + f(n-3);
	return memoi[n];
}

int main(){
	int t,n;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		scanf("%d", &n);
		printf("%lld\n", f(n));
	}
	return 0;
}
