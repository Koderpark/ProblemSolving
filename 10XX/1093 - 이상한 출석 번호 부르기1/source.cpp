#include <stdio.h>

int main(){
	int n,a,arr[25] = {0};
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		arr[a]++;
	}
	for(int i=1; i<=23; i++) printf("%d ", arr[i]);
	return 0;
}
