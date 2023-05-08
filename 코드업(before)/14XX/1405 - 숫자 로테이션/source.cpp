#include <stdio.h>

int main(){
	int n, d=0;
	int data[1001] = {0};
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) scanf("%d", &data[i]);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", data[(i+(d++)) % n]);
		}
		printf("\n");
	}
	return 0;
}
