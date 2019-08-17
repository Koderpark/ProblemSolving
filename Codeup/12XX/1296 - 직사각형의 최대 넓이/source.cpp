#include <stdio.h>

int main(){
	int n, max=0;
	scanf("%d", &n);
	n/=2;
	for(int i=1; i<=n; i++){
		if(i * (n-i) > max) max = i*(n-i);
	}
	printf("%d", max);
	return 0;
}

