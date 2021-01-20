#include <stdio.h>

int n;

void g(int a){
	if(a == n) return;
	printf("*");
	g(++a);
	return;
}

void f(int a){
	if(a == n) return;
	g(a);
	printf("\n");
	f(++a);
	return;
}

int main(){
	scanf("%d", &n);
	f(0);
	return 0;
}
