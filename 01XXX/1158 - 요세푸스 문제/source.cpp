#include <stdio.h>



int main(){
	int n,k,sum=0;
	scanf("%d %d", &n, &k);
	printf("<");
	for(int i=0; i<n; i++){
		sum += k;
		printf("%d", (sum-(sum/n))%n);
		if(i != n-1) printf(", ");
	}
	printf(">");
	
	return 0;
}
