#include <stdio.h>

int main(){
	int a,b,c,d,p;
	int price1, price2;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	scanf("%d", &p);
	price1 = a*p;
	price2 = b;
	p-=c;
	if(p>=0) price2 += p*d;
	printf("%d", price1<price2?price1:price2);
	return 0;
}
