#include <stdio.h>

int main(){
	int y;
	scanf("%d", &y);
	printf("%s", (y%4 == 0 && y%100 != 0)||(y%400 == 0)?"yes":"no");
	return 0;
}
