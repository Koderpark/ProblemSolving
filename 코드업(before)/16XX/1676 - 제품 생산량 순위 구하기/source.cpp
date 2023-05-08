#include <stdio.h>

int arr[2001] = {0};

int main(){
	int n,sum;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	for(int i=0; i<n; i++){
		sum = 1;
		for(int j=0; j<n; j++){
			if(arr[i] < arr[j]) sum++;
		}
		printf("%d\n", sum);
	}
	return 0;
}
