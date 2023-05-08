#include <stdio.h>

int main(){
	int y,m,d;
	scanf("%d %d %d", &y, &m, &d);
	printf("%s", ((y-m+d) % 10 == 0)?"대박":"그럭저럭");
	return 0;
}
