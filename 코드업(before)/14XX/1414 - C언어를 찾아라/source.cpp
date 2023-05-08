#include <stdio.h>
#include <string.h>

int main(){
	char arr[101] = {0};
	int sumc=0, sumcc=0;
	scanf("%s", &arr);
	for(int i=0; i<strlen(arr); i++){
		if(arr[i] >= 97 && 122 >= arr[i]){
			arr[i] -= 32;
		}
	}
	for(int i=0; i<strlen(arr); i++){
		if(arr[i] == 'C') sumc++;
	}
	for(int i=0; i<strlen(arr)-1; i++){
		if(arr[i] == 'C' && arr[i+1] == 'C') sumcc++;
	}
	printf("%d\n%d", sumc, sumcc);
}
