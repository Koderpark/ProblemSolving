#include <stdio.h>

void stars(int n){
	if(!n)return;
	printf("*");
	return stars(--n);
}

int main(){
	int n;
	scanf("%d", &n);
	stars(n);
	return 0;
}
