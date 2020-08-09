#include <stdio.h>

int main(){
	int n;
	double f;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lf", &f);
		printf("$%.2f\n", f/10*8);
	}
	return 0;
}
