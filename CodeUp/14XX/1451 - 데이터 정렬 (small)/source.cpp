#include <stdio.h>
#include <algorithm>

int main(){
	int n;
	int arr[10001] = {0};
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	std::sort(arr, arr+n);
	for(int i=0; i<n; i++) printf("%d\n", arr[i]);
	return 0;
}
