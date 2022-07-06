#include <stdio.h>

int arr[50] = {0};

int main(){
	int n;
	arr[1] = 1;
	scanf("%d", &n);
	for(int i=2; i<=n; i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
	printf("%d", arr[n]);
	return 0;
}
