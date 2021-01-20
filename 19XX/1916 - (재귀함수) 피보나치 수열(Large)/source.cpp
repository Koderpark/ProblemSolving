#include <stdio.h>

int arr[201] = {1};
int k = 2;

long long int fibo(int n){
	arr[k] = (arr[k-1]+ arr[k-2]) %10009;
	if(n == 1) return arr[k];
	else k++;
	return fibo(--n);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));
	return 0;
}
