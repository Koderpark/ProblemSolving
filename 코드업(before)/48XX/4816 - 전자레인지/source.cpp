#include <stdio.h>

int main(){
	int t,tmp=0,a=0,b=0,c=0;
	scanf("%d", &t);
	
	for(tmp; tmp+300<=t; tmp+=300) a++;
	for(tmp; tmp+60 <=t; tmp+=60)  b++;
	for(tmp; tmp+10 <=t; tmp+=10)  c++;
	
	if(t-tmp!=0) printf("-1");
	else printf("%d %d %d", a, b, c);
	return 0;
}
