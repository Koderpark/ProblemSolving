#include <stdio.h>
#include <math.h>

const double pi = acos(-1.0);

int main(){
	double r;
	scanf("%lf", &r);
	printf("%lf\n%lf", r*r*pi, 2*r*r);
	return 0;
}
