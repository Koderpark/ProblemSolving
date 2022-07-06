#include <stdio.h>

int main(){
	int k,h;
	scanf("%d %d", &k, &h);
	printf("%d",(k%2==1?k/2+1:k*5)+(h%2==1?h/2+1:h*5));
	return 0;
}
