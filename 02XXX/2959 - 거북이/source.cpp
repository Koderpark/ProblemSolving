#include <stdio.h>
#include <algorithm>

int main(){
	int arr[5] = {0};
	for(int i=0; i<4; i++){
		scanf("%d", &arr[i]);
	}
	std::sort(arr, arr+4);
	printf("%d", arr[0] * arr[2]);
	return 0;
}
