#include <stdio.h>

int main(){
	int a,b,c,n,sum=0;
	scanf("%d %d %d %d", &a, &b, &c, &n);
	sum = a;
	for(int i=1; i<n; i++){
		sum=a*b+c;
		a=sum;
	}
	printf("%d", sum);
	return 0;
}
