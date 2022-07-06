#include <stdio.h>
#include <algorithm>

int main(){
	int arr[3] = {0};
	int a,b;
	for(int i=0; i<3; i++){
		scanf("%d %d", &a, &b);
		arr[i] = a*b;
	}
	std::sort(arr, arr+3);
	printf("%d", arr[2]);
	return 0;
}
