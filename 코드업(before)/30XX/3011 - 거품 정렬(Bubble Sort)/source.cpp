#include <stdio.h>
#include <algorithm>

int main(){
	int n,i;
	int tmp;
	int arr[1001] = {0};
	scanf("%d",  &n);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	for(i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(arr[j]>arr[j+1]){
				tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
		}
		int a=0;
		for(int j=0; j<n-1; j++)	if(arr[j]>arr[j+1])		a++;
		if(a==0){
			printf("%d", i+1);
			return 0;
		}
	}
	printf("%d", i+1);
	return 0;
}
