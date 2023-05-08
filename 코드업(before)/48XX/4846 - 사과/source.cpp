#include <stdio.h>

int main(){
	int n;
	int a,b;
	int sum=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &a, &b);
		sum += b%a;
	}
	printf("%d", sum);
	return 0;
}
