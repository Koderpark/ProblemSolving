#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<2*n-1; i++, puts("")){
		for(int j=0; j<n; j++){
			if((j>=n-1-i && i<=n-1 )||(i>n-1&&j>=i-n+1)) printf("*");
			else printf(" ");
		}
	}
	return 0;
}
