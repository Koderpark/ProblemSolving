#include <stdio.h>

void g(int n){
	if(!n) return;
	g(n-1);
	printf("%d ", n);
	return;
}

void f(int n){
	if(!n) return;
	f(n-1);
	g(n);
	puts("");
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	f(n);
	return 0;
}
