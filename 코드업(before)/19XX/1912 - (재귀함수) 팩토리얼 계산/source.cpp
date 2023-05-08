#include <stdio.h>

int sum = 1;

int fact(int n){
	sum*=n;
	if(n == 1) return sum;
	return fact(--n);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fact(n));
	return 0;
}
