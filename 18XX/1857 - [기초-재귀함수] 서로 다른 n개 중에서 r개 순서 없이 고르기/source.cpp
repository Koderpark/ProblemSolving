#include <stdio.h>

int f(int a, int b){
	if(b == 1) return a;
	if(a == 1) return 0;
	return f(a-1,b-1) + f(a-1,b);
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d", f(a,b));
	return 0;
}
