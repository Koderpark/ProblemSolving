#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n%s",((n%10*10)+(n/10))*2%100, ((n%10*10)+(n/10))*2%100<=50?"GOOD":"OH MY GOD");
	return 0;
}
