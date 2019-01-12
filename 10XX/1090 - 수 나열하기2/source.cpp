#include <stdio.h>

int main(){
	int a,r,n;
	scanf("%d %d %d", &a, &r, &n);
	for(int i=1; i<n; i++, a*=r);
	printf("%d", a);
	return 0;
}
