#include <stdio.h>
#include <string.h>

char arr[101] = {0};

int main(){
	int i=0;
	fgets(arr, 101, stdin);
	for(i=0; i<strlen(arr); i++){
		switch(arr[i]){
			case ',' : printf(" "); break;
			case ' ' : break;
			case ';' : printf("\n"); break;
			default:   printf("%c", arr[i]);
		}
	}
	if(arr[i] != ';') printf("\n"); 
	return 0;
}
