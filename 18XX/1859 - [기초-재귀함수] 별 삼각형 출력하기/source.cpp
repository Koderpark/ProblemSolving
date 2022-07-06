#include <stdio.h>

void g(int n){
	printf("*");
	if(!n) return;
	g(--n);
	return;
}

void f(int n){
	if(!n) return;
	f(--n);
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
