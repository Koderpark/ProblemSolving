#include <stdio.h>
#include <string.h>

int main(){
	char arr[1000] = {0};
	fgets(arr, 999, stdin);
	for(int i=0; i<strlen(arr); i++){
		if(arr[i] == 'x'||arr[i] =='y'||arr[i] == 'z'){
			printf("%c", arr[i]-23);
		}else if(arr[i] != ' '){
			printf("%c", arr[i]+3);
		}else{
			printf(" ");
		}
	}
}
