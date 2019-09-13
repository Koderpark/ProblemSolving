#include <stdio.h>
#include <algorithm>

int main(){
	int max = 0;
	int arr[3] = {0};
	
	for(int i=0; i<3; i++)	scanf("%d", &arr[i]);
	std::sort(arr, arr+3);
	
	printf("%s", arr[2]<arr[0]+arr[1] ? "yes":"no");
	
	return 0;
}
