#include <stdio.h>

void f(int n){
	printf("%d\n", n);
	if(n==1) return;
	else return f(n-1);
}

int main(){
	int n;
	scanf("%d", &n);
	f(n);
	return 0;
}
