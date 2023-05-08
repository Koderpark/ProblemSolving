#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%s+%s=%s", (a%2)?"È¦¼ö":"Â¦¼ö", (b%2)?"È¦¼ö":"Â¦¼ö", ((a+b)%2)?"È¦¼ö":"Â¦¼ö");
	return 0;
}
