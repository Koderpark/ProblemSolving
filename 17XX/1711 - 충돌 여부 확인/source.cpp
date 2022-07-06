#include <stdio.h>

int main(){
	int x1,y1,x2,y2,bx,by;
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &bx, &by);
	if(x1 <= bx && y1 <= by && x2 >= bx && y2 >= by) printf("충돌");
	else printf("비충돌");
	return 0;
}
