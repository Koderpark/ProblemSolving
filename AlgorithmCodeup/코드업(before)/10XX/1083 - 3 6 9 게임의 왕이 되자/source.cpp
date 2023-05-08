#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		printf("%c ", i % 3 == 0 ? 'X' : i+48);
	}
	return 0;
}
