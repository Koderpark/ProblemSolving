#include <stdio.h>

int main(){
	int sec;
	scanf("%d", &sec);
	printf("%d %d %d %d", sec/24/60/60, sec/60/60%24, sec/60%60, sec%60);
	return 0;
}
