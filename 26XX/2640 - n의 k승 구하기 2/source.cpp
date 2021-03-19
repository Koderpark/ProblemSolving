#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d", (long long int)pow(a,b) % 1000000007);
	return 0;
}
