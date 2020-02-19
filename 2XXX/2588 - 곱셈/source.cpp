#include <stdio.h>

int main(){
	int a,b;
	int tmp;
	scanf("%d %d", &a, &b);
	for(int i=b; i>0; i/=10){
		tmp = i%10;
		printf("%d\n", a*tmp);
	}
	printf("%d", a*b);
	return 0;
}
