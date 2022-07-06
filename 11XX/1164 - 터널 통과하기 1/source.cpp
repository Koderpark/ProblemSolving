#include <stdio.h>

int main(){
	int arr[3] = {0};
	int min = 12341231;
	
	for(int i=0; i<3; i++){
		scanf("%d", &arr[i]);
		if(arr[i] < min) min = arr[i];
	}
	
	if(min <= 170) printf("CRASH");
	else printf("PASS");
	
	return 0;
}
