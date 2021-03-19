#include <stdio.h>

int main(){
	int x,y,solve=0;
	scanf("%d", &x);
	scanf("%d", &y);
	if (x*y>0) solve = x>0?1:3;
	else solve = x>0?4:2;
	printf("%d", solve);
	return 0;
}
