#include <stdio.h>

int main(){
	int n;
	int data[1001] = {0};
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) scanf("%d", &data[i]);
	for(int i=n-1; i>=0; i--) printf("%d ", data[i]);
	return 0;
}
