#include <stdio.h>

int main(){
	int n,a;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		if(i==0)   printf("%d ", a);
		if(i==n/2) printf("%d ", a);
		if(i==n-1) printf("%d ", a);
	}
	return 0;
}
