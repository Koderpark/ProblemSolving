#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	int x = (a+b)/2, y = (a-b)/2;
	if((a+b)%2 || (a-b)%2 || x<0 || y<0 ) printf("-1");
	
	else{
		if(x>=y) printf("%d %d", x, y);
		else printf("%d %d", y, x);
	}
	return 0;
}
