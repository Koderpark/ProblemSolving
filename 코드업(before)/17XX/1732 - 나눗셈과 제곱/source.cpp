#include <stdio.h>

int main(){
	int a,b,sum=1;
	scanf("%d %d", &a, &b);
	printf("%.1f\n", (float)a/b);
	printf("%d\n", a/b);
	for(int i=0; i<b; i++){
		sum*=a;
	}	
	printf("%d", sum);
	return 0;
}
