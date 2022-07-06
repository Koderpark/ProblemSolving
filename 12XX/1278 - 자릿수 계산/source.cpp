#include <stdio.h>

int main(){
	int n,sum=1;
	scanf("%d", &n);
	for(int i=n; i>=10; i/=10) sum++;
	printf("%d", sum);
	return 0; 
}
