#include <stdio.h>
#include <algorithm>

int arr[50001] = {0};
int arr2[50001] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
		arr2[i] = arr[i];
	}
	std::sort(arr, arr+n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr2[i] == arr[j]) {
				printf("%d ", j);
				break;
			}
		}
	}
	return 0;
}
