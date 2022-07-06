#include <stdio.h>

int main(){
	int h,m,time;
	scanf("%d %d", &h, &m);
	time = h*60 + m;
	time-=45;
	if(time < 0) time+= 24*60;
	printf("%d %d", time/60, time%60);
	return 0;
}
