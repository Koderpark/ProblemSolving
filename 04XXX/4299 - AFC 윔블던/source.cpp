#include <stdio.h>

int main(){
	int a,b;
	scanf("%d", &a, &b);
	int x = (a+b)/2, y = (a-b)/2;
	if((a+b)%2 != 0 || (a-b)%2 != 0) printf("-1");
	else{
		if(a>=b) printf("%d %d", x, y);
		else printf("%d %d", y, x);
	}
	return 0;
}
