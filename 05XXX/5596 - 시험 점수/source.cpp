#include <stdio.h>

int main(){
	int tmp;
	int a=0;
	int b=0;
	for(int i=0; i<4; i++){
		scanf("%d", &tmp);
		a+=tmp;
	}
	for(int i=0; i<4; i++){
		scanf("%d", &tmp);
		b+=tmp;
	}
	printf("%d", a>b?a:b);
	return 0;
}
