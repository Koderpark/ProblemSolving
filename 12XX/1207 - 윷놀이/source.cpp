#include <stdio.h>

int main(){
	int a,b,c,d;
	int sum;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	sum = a+b+c+d;
	
	switch(sum){
		case 1: printf("µµ"); break;
		case 2: printf("°³"); break;
		case 3: printf("°É"); break;
		case 4: printf("À·"); break;
		default:printf("¸ð"); 
	}
	return 0;
}
