#include <stdio.h>
#include <algorithm>

int main(){
	int arr[5] = {0};
	for(int i=0; i<5; i++) scanf("%d", &arr[i]);
	std::sort(arr, arr+5);
	printf("%d\n%d", arr[4], arr[0]);
	return 0;
}
