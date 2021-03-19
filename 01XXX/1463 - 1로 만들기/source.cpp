#include <stdio.h>

int arr[3000001] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<3*n; i++) arr[i] = 123456;
	arr[1] = 0;
	for(int i=1; i<n; i++){
		if(arr[i+1] > arr[i] + 1)  arr[i+1] = arr[i] + 1;
		if(arr[2*i] > arr[i] + 1)  arr[2*i] = arr[i] + 1;
		if(arr[3*i] > arr[i] + 1)  arr[3*i] = arr[i] + 1;
	}
	printf("%d", arr[n]);
	return 0;
}
