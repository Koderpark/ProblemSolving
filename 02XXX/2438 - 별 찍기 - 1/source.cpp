#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++,puts("")){
		for(int j=n-i; j<n; j++){
			printf("*");
		}
	}
	return 0;
}
