#include <stdio.h>

int main(){
	double a,b,c;
	double AF,FB;
	double BD,DC;
	double CeEa;
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &AF, &BD);
	FB = c-AF;
	DC = a-BD;
	CeEa = (DC*FB)/(BD*AF);
	printf("%.10lf", b/(1+CeEa)*CeEa);
	return 0;
}
