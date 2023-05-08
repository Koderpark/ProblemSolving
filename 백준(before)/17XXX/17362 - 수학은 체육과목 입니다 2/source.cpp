#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	while(n>5) n-=8;
	if(n<=0) n = 2-n;
	printf("%d", n);
}
