#include <stdio.h>

int num(int a){
	int sum=0;
	while(a!=0){
		sum+=a%10;
		a/=10;
	}
	return sum;
}

int main(){
	int n,sum,t=0;
	scanf("%d", &n);
	sum = n;
	do{
		sum = (sum%10*10) + num(sum)%10;
		t++;
	}while(sum != n);
	printf("%d\n", t);
	return 0;
}
