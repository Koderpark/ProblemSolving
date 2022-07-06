#include <stdio.h>

int main(){
	int a,b,c,d,t;
	scanf("%d %d %d", &a, &b, &c);
	t = a*60 + b + c;
	if(t >= 1440) t-=1440;
	printf("%d %d", t/60, t%60);
	return 0;
}
