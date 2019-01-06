#include <stdio.h>

int main(){
	int y;
	scanf("%d", &y);
	printf("%d %d", (2012-y+1)%100, (2012-y+1)/100==19?1:3);
	return 0;
}
