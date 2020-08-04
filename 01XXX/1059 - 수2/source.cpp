#include <stdio.h>
#include <algorithm>
int arr[51] = {0};

int main(){
	int n,k,min=9999;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &k);
	std::sort(arr, arr+n);
	for(int i=0; i<n-1; i++){
		if(k < arr[i+1]){
			printf("%d", (k-arr[i])*(arr[i+1]-k)-1);
			break;
		}
	}
	
	return 0;
}
