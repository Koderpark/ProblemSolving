#include <stdio.h>

int main(){
	char arr[21];
	int i = 0;
	scanf("%s", &arr);
	while(arr[i] != NULL){
		printf("\'%c\'\n", arr[i]);
		i++;
	}
}
