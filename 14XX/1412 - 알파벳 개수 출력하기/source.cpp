#include <stdio.h>

int main(){
	char arr[91];
	int num[129] = {0};
	fgets(arr, 91, stdin);
	
	for(int i=0; arr[i] != '\0'; i++) num[arr[i]]++;
	for(int i=97; i<=122; i++){
		printf("%c:%d\n", i, num[i]);
	}
	return 0;
}
