#include <stdio.h>
#include <string.h>

int main(){
	char arr[11] = {0};
	scanf("%s", &arr);
	for(int i=0; i<strlen(arr); i++){
		if(arr[i] == 't') printf("%d ", i+1);
	}
	return 0;
}
