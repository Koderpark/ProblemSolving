#include <stdio.h>
#include <algorithm>

int main(){
	int a,b;
	int arr[2002]={0};
	scanf("%d %d", &a, &b);
	for(int i=0; i<a; i++) scanf("%d", &arr[i]);
	for(int i=0; i<b; i++) scanf("%d", &arr[i+a]);
	
	std::sort(arr, arr+a+b);
	for(int i=0; i<a+b; i++) printf("%d ", arr[i]);
}
