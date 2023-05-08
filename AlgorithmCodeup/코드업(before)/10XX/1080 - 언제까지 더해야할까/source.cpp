#include <stdio.h>

int main(){
	int n;
	int sum = 0;
	int i = 1;
	scanf("%d", &n);
	while(!(n <= sum)) sum += i++; 
	printf("%d", i - 1);
	return 0;
}
