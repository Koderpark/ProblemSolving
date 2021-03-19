#include <stdio.h>

int main(){
	int k;
	int a=1,b=0,tmp;
	scanf("%d", &k);
	for(int i=0; i<k; i++){
		tmp = b;
		b = a+b;
		a = tmp;
	}
	printf("%d %d", a, b);
	return 0;
}
