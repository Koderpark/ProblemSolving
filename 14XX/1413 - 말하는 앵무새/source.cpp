#include <stdio.h>
#include <string.h>

int main(){
	char arr[101] = {0};
	fgets(arr, 100, stdin);
	for(int i=strlen(arr)-1; i>=0; i--){
		printf("%c", arr[i]);
	}
	return 0;
}
