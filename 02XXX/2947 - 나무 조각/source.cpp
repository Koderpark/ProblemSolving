#include <stdio.h>

int arr[10] = {0};

int main(){
	int tmp = 0;
	bool swap = false;
	for(int i=0; i<5; i++) scanf("%d", &arr[i]);
	for(int i=0; i<5; i++){
		swap = false;
		for(int j=0; j<4; j++){
			if(arr[j] > arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				for(int i=0; i<5; i++) printf("%d ", arr[i]);
				printf("\n");
				swap = true;
 			}
		}
	}
	return 0;
}
