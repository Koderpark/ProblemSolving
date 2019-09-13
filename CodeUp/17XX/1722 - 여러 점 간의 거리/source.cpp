#include <stdio.h>
#include <math.h>

int main(){
	int n;
	float x[101], y[101], sum=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++) 	  scanf("%f %f", &x[i], &y[i]);
	for(int i=0; i<n-1; i++)  sum+=sqrt((x[i]-x[i+1])*(x[i]-x[i+1])+(y[i]-y[i+1])*(y[i]-y[i+1]));
	
	printf("%.2f", sum);
	
	return 0;
}
