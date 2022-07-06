#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	if(a==2&&b==18){
		puts("Special");
		return 0;
	}
	else printf("%s", a*100+b>218?"After":"Before");
	return 0;
}
