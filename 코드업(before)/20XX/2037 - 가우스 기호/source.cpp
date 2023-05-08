#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=n; i<2*n; i++){
		if(i==n) printf("{");
		if(i==2*n-1) printf("%d}", i);
		else printf("%d, ", i);
	}
	return 0;
}
