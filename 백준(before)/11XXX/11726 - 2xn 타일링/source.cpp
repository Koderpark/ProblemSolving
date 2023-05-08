#include <stdio.h>

int arr[1001] = {0};

int f(int n){
	if(arr[n] != 0) return arr[n];
	if(n == 0) return 1;
	if(n == -1) return 0;
	arr[n] = (f(n-1) + f(n-2)) % 10007;
	return arr[n];
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
	return 0;
}
