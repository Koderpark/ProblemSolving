#include <stdio.h>

int main(){
	long long int n;
	scanf("%d", &n);
	n%=4;
	
	if(n==0) printf("CY");
	if(n==1) printf("SK");
	if(n==2) printf("CY");
	if(n==3) printf("SK");
	return 0;
}
