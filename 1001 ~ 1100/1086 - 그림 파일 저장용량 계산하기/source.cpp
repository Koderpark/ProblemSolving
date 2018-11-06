#include <stdio.h>

int main(){
	int w,h,b;
	scanf("%d %d %d", &w, &h, &b);
	printf("%.2lf MB", (double)(w*h*b) / 8388608);
	return 0;
}
