#include <stdio.h>
#include <string.h>

int main(){
	char arr[1001] = {0};
	fgets(arr, 1000, stdin);
	for(int i=0; i<strlen(arr); i++){
		if(arr[i] <= 90 && arr[i] >= 65){
			printf("%c", arr[i]+32);
		}else if(arr[i] <=122 && arr[i] >= 97){
			printf("%c", arr[i]-32);
		}else{
			printf("%c", arr[i]);
		}
	}
}
