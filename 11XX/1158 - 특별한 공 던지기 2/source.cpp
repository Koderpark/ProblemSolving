#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	printf("%s", (30<=a&&a<=40)||(60<=a&&a<=70)?"win":"lose");
	return 0;
}
