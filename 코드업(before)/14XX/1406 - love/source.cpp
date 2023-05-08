#include <stdio.h>
#include <string.h>

int main(){
	char arr[10] = {0};
	scanf("%s", &arr);
	if(!strcmp(arr, "love")){
		printf("I love you.");
	}
	return 0;
}
