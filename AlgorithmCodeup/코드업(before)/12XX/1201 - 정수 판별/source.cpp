#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	printf("%s", n==0?"0":(n>0?"양수":"음수"));
	return 0;
}
