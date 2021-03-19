#include <stdio.h>

int main(){
	int k,arr[101] = {0};
	scanf("%d", &k);
	for(int i=0; i<k; i++) scanf("%d", &arr[i]);
	for(int i=0; i<2*k; i++){
		printf("%d\n", arr[i%k]);
	}
	return 0;
}
