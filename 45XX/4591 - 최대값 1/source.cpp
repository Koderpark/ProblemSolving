#include <stdio.h>

int arr[10] = {0};

int main(){
	int max = -1;
	for(int i=0; i<9; i++){
		scanf("%d", &arr[i]);
		
		if(max < arr[i])	max = arr[i];
		
	}
	
	for(int i=0; i<9; i++){
		if(arr[i] == max) printf("%d\n%d", max, i+1);
		
	}
	return 0;
}
