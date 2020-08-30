#include <stdio.h>

int main(){
	double a,b,c;
	double AF,FB;
	double BD,DC;
	double CE,EA;
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &AF, &BD);
	FB = c-AF;
	DC = a-BD;
	EA = b*(BD/a);
	printf("%.10lf", (double)(FB*DC*EA)/(AF*BD));
}
