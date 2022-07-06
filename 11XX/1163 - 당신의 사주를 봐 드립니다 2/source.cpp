#include <stdio.h>

int main(){
	int y,m,d;
	scanf("%d %d %d", &y, &m, &d);
	printf("%s", ((y+m+d)/100)%2?"그럭저럭":"대박");
	return 0;
}
