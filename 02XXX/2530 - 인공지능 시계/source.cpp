#include <stdio.h>

int main(){
	int a,b,c,d,t;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	t = a*3600 + b*60 + c + d;
	if(t>=86400) t%=86400;
	printf("%d %d %d", t/3600, t/60%60, t%60);
	return 0;
}
