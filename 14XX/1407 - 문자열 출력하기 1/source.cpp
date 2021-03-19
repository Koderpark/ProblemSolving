#include <stdio.h>

int main(){
	char arr[101];
	int len=0;
	fgets(arr,101,stdin);
	for(int i=0; arr[i] !='\0'; i++) if(arr[i] != ' ') printf("%c", arr[i]);
	return 0;
}
