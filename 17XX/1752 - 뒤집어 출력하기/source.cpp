#include <stdio.h>
#include <string.h>

int main(){
	char arr[21] = {0};
	scanf("%s", &arr);
	int length = strlen(arr);
	for(int i=length-1; i>=0; i--)printf("%c", arr[i]);
	return 0;
}
