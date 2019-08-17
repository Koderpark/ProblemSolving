#include <stdio.h>

void stars(int n){
	if(!n) return;
	stars(--n);
	printf("%d ", n+1);
}

int main(){
	int n;
	scanf("%d", &n);
	stars(n);
	return 0;
}
