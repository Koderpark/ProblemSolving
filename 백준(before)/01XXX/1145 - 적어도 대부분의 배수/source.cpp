#include <stdio.h>

int main(){
	int k=0;
	int c=0;
	int arr[5] = {0};
	for(int i=0; i<5; i++) scanf("%d", &arr[i]);
	while(1){
		k++;
		c=0;
		for(int i=0; i<5; i++) c+=k%arr[i]==0;
		if(c >= 3){
			printf("%d", k);
			break;
		}
	}
	return 0;
}
