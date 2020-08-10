#include <stdio.h>

int arr[1500001] = {0};

int main(){
	long long int n;
	arr[0] = 0;
	arr[1] = 1;
	scanf("%lld", &n);
	for(int i=2; i<=1500000; i++){
		arr[i] = (arr[i-1] + arr[i-2]) % 1000000;
	}
	printf("%d", arr[n%1500000]);
	return 0;
}
