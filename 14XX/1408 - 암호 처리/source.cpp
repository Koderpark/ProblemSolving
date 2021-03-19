#include <stdio.h>
#include <string.h>

int main(){
	char arr[21] = {0};
	scanf("%s", &arr);
	for(int i=0; i<strlen(arr); i++){
		printf("%c", arr[i]+2);
	}
	printf("\n");
	for(int i=0; i<strlen(arr); i++){
		printf("%c", (arr[i]*7) % 80 + 48);
	}
	return 0;
}
