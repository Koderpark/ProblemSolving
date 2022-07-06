#include <stdio.h>
#include <string.h>

int main(){
	char arr[1000] = {0};
	fgets(arr, 999, stdin);
	for(int i=0; i<strlen(arr); i++){
		if(arr[i] == 'a'||arr[i] =='b'||arr[i] == 'c'){
			printf("%c", arr[i]+23);
		}else if(arr[i] != ' '){
			printf("%c", arr[i]-3);
		}else{
			printf(" ");
		}
	}
}
