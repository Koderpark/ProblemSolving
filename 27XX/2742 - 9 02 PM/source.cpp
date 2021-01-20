#include <stdio.h>
#include <algorithm>

int sortf(int a, int b){ return a>b; }

int main(){
	int n, arr[100];
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	std::sort(arr, arr+n, sortf);
	
	int tmp=arr[0];
	arr[0] = arr[n/2];
	arr[n/2] = tmp;
	
	for(int i=0; i<n; i++) printf("%d ", arr[i]);
	return 0;
}
