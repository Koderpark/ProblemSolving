#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	printf("%s",(50<=a&&a<=70)||!(a%6)?"win":"lose");
	return 0;
}
