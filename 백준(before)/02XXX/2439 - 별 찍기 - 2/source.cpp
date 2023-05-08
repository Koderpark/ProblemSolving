#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=n; i>=1; i--,puts("")){
		for(int j=1; j<=n; j++)printf("%c", i==j||i<j?'*':' ');
	}
	return 0;
}
