#include <stdio.h>
#include <string.h>

int check[11] = {0};
char input[11] = {0};

int main(){
	int n;
	int max=-1;
	scanf("%s", input);
	for(int i=0; i<strlen(input); i++){
		if(input[i] == '9') check[6]++;
		else check[input[i]-48]++;
	}
	check[6] = (check[6]+1)/2;
	for(int i=0; i<9; i++){
		if(max < check[i]) max=check[i];
	}
	printf("%d", max);
	return 0;
} 
