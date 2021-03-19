#include <stdio.h>

void ubaksu(int n){
	printf("%d\n", n);
	if(n==1) return;
	ubaksu((n%2)?3*n+1:n/2);
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	ubaksu(n);
	return 0;
}
