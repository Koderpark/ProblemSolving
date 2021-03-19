#include <stdio.h>

int main(){
	int year;
	scanf("%d", &year);
	if((year%4==0 && year%100!=0)||year%400==0)puts("1");
	else puts("0");
	return 0;
}
