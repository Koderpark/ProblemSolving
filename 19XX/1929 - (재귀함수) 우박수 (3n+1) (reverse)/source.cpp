#include <stdio.h>

void ubaksu(int n){
	if(n==1){
		printf("1\n");
		return;
	}
	ubaksu((n%2)?3*n+1:n/2);
	printf("%d\n", n);
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	ubaksu(n);
	return 0;
}
