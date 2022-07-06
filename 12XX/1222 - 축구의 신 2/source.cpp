#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	for(int i=a; i<90; i+=5, b++);
	printf("%s", b==c?"same":b>c?"win":"lose");
	return 0;
}
