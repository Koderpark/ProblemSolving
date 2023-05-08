#include <stdio.h>
#include <math.h>

int main(){
	float x1,x2,y1,y2;
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	
	float x=(x1-x2)*(x1-x2);
	float y=(y1-y2)*(y1-y2);
	
	printf("%.2f", sqrt(x+y));
	
	return 0;
}
