#include <stdio.h>

int main(){
	int a,b,t;
	scanf("%d %d", &a, &b);
	for(int i=0; i<5; i++){
		scanf("%d", &t);
		printf("%d ", t-(a*b));
	}
	return 0;
}
