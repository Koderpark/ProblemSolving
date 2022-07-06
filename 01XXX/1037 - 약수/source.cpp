#include <stdio.h>
#include <algorithm>

int arr[51] = {0};

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		scanf("%d", &arr[i]);
	}
	std::sort(arr,arr+t);
	printf("%d", arr[0] * arr[t-1]);
	return 0;
}
