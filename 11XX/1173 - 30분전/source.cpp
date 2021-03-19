#include <stdio.h>

int main(){
	int h,m,time;
	scanf("%d %d", &h, &m);
	time = (h==0&&m<30?24:h) * 60 + m - 30;
	printf("%d %d", time/60 , time%60);
	return 0;
}
