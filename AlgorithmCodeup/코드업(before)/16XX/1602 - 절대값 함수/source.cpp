#include <stdio.h>
double ABS(double d){
	return d>=0?d:-d;
}
int main(){
	double a;
	scanf("%lf", &a);
	printf("%.11g", ABS(a));
}
