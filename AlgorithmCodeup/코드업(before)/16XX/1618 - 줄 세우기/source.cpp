#include <stdio.h>

int main(){
	int arr[3] = {0};
	int tmp;
	for(int i=0; i<3; i++) scanf("%d", &arr[i]);
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(arr[i] < arr[j]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	
	printf("%d %d %d", arr[0], arr[1], arr[2]);
	return 0;
}
