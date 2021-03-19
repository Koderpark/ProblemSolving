#include <stdio.h>
#include <string.h>

int main(){
	char arr[101] = {0};
	int sum=0;
	gets(arr);
	for(int i=0; i<strlen(arr)-3; i++){
		if(arr[i]=='l'&&arr[i+1]=='o'&&arr[i+2]=='v'&&arr[i+3]=='e'){
			sum++;
		}
	}
	printf("%d", sum);
	return 0;
}
