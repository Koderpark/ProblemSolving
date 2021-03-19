#include <stdio.h>

int main(){
	int arr[3] = {0};
	for(int i=0; i<3; i++) scanf("%d", &arr[i]);
	
	for(int i=0; i<3; i++){
		if(arr[i] <= 170){
			printf("CRASH %d", arr[i]);
			goto end;
		}
	}
	printf("PASS");
	end:
	return 0;
}
