#include <stdio.h>

void logic(int n){
	if(n == 0 || n == 1){
		printf("%d", n);
		return;
	}
	logic(n/2);
	printf("%d", n%2);
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	logic(n);
	return 0;
}
