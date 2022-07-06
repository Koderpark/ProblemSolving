#include <stdio.h>
#include <algorithm>

int arr[10001] = {0};

int main(){
	int n,ans=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	std::sort(arr, arr+n);
	for(int i=n-1; i>=1; i--){
		if((arr[i-1]>0 && arr[i-1]!=1) || (arr[i]<=0 && arr[i-1]<0 && !i%2==0)){
			arr[i] *= arr[i-1];
			arr[i-1] = 0;
			i--;
		}
	}
	for(int i=0; i<n; i++){
		ans += arr[i];
	}
	printf("%d", ans);
	return 0;
}
