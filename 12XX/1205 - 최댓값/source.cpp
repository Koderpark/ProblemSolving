#include <stdio.h>
#include <math.h>

int main(){
	float a,b;
	float max = -123456789;
	
	scanf("%f %f", &a, &b);
	
	if(a+b > max) max = a+b;
	
	if(a-b > max) max = a-b;
	if(b-a > max) max = b-a;
	
	if(a*b > max) max = a*b;
	
	if(a/b > max) max = a/b;
	if(b/a > max) max = b/a;
	
	if(pow(a,b) > max) max = pow(a,b);
	if(pow(b,a) > max) max = pow(b,a);
	
	printf("%f", max);
	return 0;
}
