#include <stdio.h>
#include <string.h>
int main(){
	char arr[1001] = {0};
	fgets(arr, 1001, stdin);
	printf("%d", strlen(arr));
	return 0;
}
