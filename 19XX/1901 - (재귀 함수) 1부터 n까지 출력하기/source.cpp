#include <stdio.h>

void f(int n, int a){
	printf("%d\n", a);
	if(a == n) return;
	else f(n, ++a);
}

int main(){
	int n;
	scanf("%d", &n);
	f(n, 1);
	return 0;
}
