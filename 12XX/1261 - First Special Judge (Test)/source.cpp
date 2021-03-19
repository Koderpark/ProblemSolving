#include <stdio.h>

int main(){
	int arr[10]={0},sum=0;
	for(int i=0; i<10; i++){
		scanf("%d", &arr[i]);
		if(sum == 0 && arr[i] % 5 == 0) sum = arr[i];
	}
	printf("%d", sum);
	return 0;
}
