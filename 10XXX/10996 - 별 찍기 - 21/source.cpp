#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n*2; i++,puts("")) for(int j=0; j<n; j++) printf("%c", (i+j)%2?' ':'*');
	return 0;
}
