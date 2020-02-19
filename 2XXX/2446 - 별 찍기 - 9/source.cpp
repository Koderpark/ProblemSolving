#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<2*n-1; i++, puts("")){
		for(int j=0; j<n; j++){
			if(i<=j || j>=2*n-2-i) printf("*");
			else printf(" ");
		}
		for(int j=0; i<n?(j<n-1-i):(j<=i-n); j++) printf("*");
	}
	return 0;
}
