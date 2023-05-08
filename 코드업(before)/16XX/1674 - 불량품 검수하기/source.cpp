#include <stdio.h>

int add(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	printf(add(n)%7==4?"Bad":"Good");
	return 0;
}
