#include <stdio.h>

int main(){
	int x=0;
	int y=0;
	int a,b;
	for(int i=0; i<3; i++){
		scanf("%d %d", &a, &b);
		x^=a;
		y^=b;
	}
	printf("%d %d", x,y);
	return 0;
}
