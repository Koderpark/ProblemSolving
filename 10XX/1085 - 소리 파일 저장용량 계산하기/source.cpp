#include <stdio.h>

int main(){
	int h,b,c,s;
	scanf("%d %d %d %d", &h, &b, &c, &s);
	printf("%.1lf MB", (double)(h*b*c*s) / 8388608);
	return 0;
}
