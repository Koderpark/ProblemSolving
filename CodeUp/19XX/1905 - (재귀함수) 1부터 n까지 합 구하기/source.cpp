#include <stdio.h>

int sum = 0;

void f(int n){
	sum+=n;
	if(n == 1) return;
	return f(n-1);
}

int main(){
	int n;
	scanf("%d", &n);
	f(n);
	printf("%d", sum); 
	return 0;
}
