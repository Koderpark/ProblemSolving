#include <stdio.h>
#include <algorithm>

int main(){
	int arr[11] = {0};
	for(int i=0; i<10; i++) scanf("%d", &arr[i]);
	std::sort(arr, arr+10);
	printf("%d", arr[7]);
	return 0;
}
