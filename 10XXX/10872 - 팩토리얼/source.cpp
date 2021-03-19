#include <stdio.h>

int fact(int a){
	if(a == 0) return 1;
	if(a == 1) return 1;
	return a*fact(a-1);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fact(n));
	return 0;
}
