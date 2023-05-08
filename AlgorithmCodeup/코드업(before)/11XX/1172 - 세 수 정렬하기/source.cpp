#include <stdio.h>
#include <algorithm>

int main(){
	int arr[3] = {0};
	for(int i=0; i<3; i++) scanf("%d", &arr[i]);
	std::sort(arr , arr+3);
	for(int i=0; i<3; i++) printf("%d ", arr[i]);
	return 0;
}
