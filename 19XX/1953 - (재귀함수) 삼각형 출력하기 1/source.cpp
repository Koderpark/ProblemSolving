#include <stdio.h>

int n;

void g(int a){
	if(a == n) return;
	printf("*");
	g(++a);
	return;
}

void f(int a){
	if(a == 0) return;
	g(--a);
	puts("");
	f(a);
	return;
}

int main(){
	scanf("%d", &n);
	f(n);
	return 0;
}
