#include <stdio.h>
#include <math.h>
 
int main(){
	int l;
	float a,b,c,d;
	scanf("%d %d %d %d %d", &l, &a, &b, &c, &d);
	int day1 = l-ceil(a/c);
	int day2 = l-ceil(b/d);
	printf("%d", day1>day2?day2:day1);
	return 0;
}
