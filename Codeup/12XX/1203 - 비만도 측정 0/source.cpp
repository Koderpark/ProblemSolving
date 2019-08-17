#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	printf("%s", n>20?"비만":n<=10?"정상":"과체중");
	return 0;
}
