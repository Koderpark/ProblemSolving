#include <stdio.h>
#include <math.h>
int main(){
	int a,b,v,p;
	scanf("%d %d %d", &a, &b, &v);
	v-=b;
	p = a-b;
	printf("%d", (v-1)/p+1);
	return 0;
}
