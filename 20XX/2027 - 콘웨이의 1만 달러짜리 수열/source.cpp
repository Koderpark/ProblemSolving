#include <stdio.h>

int arr[10001] = {1};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=2; i<=n; i++){
		arr[i] = arr[arr[i]] + arr[i-arr[i]];
		printf("%d", arr[i]); 
	}
}
