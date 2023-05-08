#include <stdio.h>
#include <string.h>

char arr[101] = {0};

int main(){
	scanf("%s", &arr);
	for(int i=0; i<strlen(arr); i++) printf("%c", arr[i]==',' ? ' ' : arr[i]);
	return 0;
}
