#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n*2-1; i++,puts("")){
		for(int j=0; j<n*2; j++){
			if(j<=i && i<n || j>i && i>=n-1 || i<n && j>=2*n-1-i || i>=n-1 && j<2*n-1-i) printf("*");
			else printf(" ");
		}
	}
	return 0;
}
