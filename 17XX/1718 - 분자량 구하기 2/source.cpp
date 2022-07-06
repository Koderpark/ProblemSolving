#include <stdio.h>

int main(){
	char a;
	int c,h,sum=0;
	scanf("%c", &a);
	scanf("%d", &c);
	if(c == 'H'){
		c = 1;
	} else {
		scanf("%c", &a);
		scanf("%d", &h);
	}
	
	sum = c*12+h;
	printf("%d", sum);
}
