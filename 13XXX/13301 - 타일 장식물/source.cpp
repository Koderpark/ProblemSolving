#include <stdio.h>

long long int arr[101] = {0};

int main(){
	arr[0] = 1;
	arr[1] = 1;
	int n;
	scanf("%d", &n);
	for(int i=2; i<=n; i++){
		arr[i] = arr[i-2] + arr[i-1];
	}
	printf("%lld", (arr[n-1] + arr[n]) * 2);
	return 0;
}
