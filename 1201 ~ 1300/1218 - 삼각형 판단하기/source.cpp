#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	if(a + b <= c)				 printf("»ï°¢Çü¾Æ´Ô");
	else if((a==b)||(b==c)||(c==a)){
		if(a==b && b==c && c==b) printf("Á¤»ï°¢Çü");
		else					 printf("ÀÌµîº¯»ï°¢Çü");
	}
	else if(a*a + b*b == c*c)	 printf("Á÷°¢»ï°¢Çü");
	else						 printf("»ï°¢Çü");
	 
	return 0;
}
