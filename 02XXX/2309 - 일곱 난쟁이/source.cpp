#include <stdio.h>
#include <algorithm>

int main(){
	int arr[10] = {0};
	int sum=0;
	for(int i=0; i<9; i++){
		scanf("%d", &arr[i]);
		sum+=arr[i];
	}
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			if(i==j) break;
			if( sum - (arr[i] + arr[j]) == 100 ){
				arr[i] = 999;
				arr[j] = 999;
				goto end;
			}
		}
	}
	end:
	std::sort(arr, arr+9);
	for(int i=0; i<7; i++) printf("%d\n", arr[i]);
	return 0;
}
