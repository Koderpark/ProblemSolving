#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char last[5]={0};
	scanf("%d", &n);
	
	if(n/10==1 && (n%10==1||n%10==2||n%10==3)) strcpy(last, "th");
	else if(n%10==1) strcpy(last, "st");
	else if(n%10==2) strcpy(last, "nd");
	else if(n%10==3) strcpy(last, "rd");
	else strcpy(last, "th");
	
	printf("%d%s", n, last);
	return 0;
}
