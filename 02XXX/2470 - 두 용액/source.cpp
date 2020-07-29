#include <stdio.h>
#include <algorithm>
#include <math.h> 

int arr[100001] = {0};
int n;
long long int min = 2000000001;

int main(){
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	std::sort(arr, arr+n);
	int fp=0, ep=n-1; // 두 배열 인덱스 선언. 
	int v1, v2; // 두 용액 선언. 
	while(fp!=ep){
		if(min >= abs(arr[fp]+arr[ep])){
			v1 = arr[fp];
			v2 = arr[ep];
			min = abs(arr[fp]+arr[ep]);
		}
		if(arr[fp]+arr[ep]>0) ep--;
		else if(arr[fp]+arr[ep]<=0) fp++;
	}
	printf("%d %d", v1, v2);
}
