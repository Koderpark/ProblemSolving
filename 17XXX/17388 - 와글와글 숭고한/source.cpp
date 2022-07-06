#include <stdio.h>

int minf(int a, int b){ return a>b?b:a; }

int main(){
	int a,b,c,min;
	scanf("%d %d %d",&a ,&b ,&c);
	min = minf(a,minf(b,c));
	if(a+b+c >= 100) puts("OK");
	else			 printf("%s", min==a?"Soongsil":min==b?"Korea":"Hanyang");
}
