#include <stdio.h>

int main(){
	int a,b,c,i=-1;
	scanf("%d %d %d", &a, &b, &c);
	if(c<=b){
		printf("-1");
		return 0;
	}
	while(a+(b*++i) >= c*i);
	printf("%d", i);
	return 0;
}
