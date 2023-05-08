#include <stdio.h>
#include <string.h>

char input[101] = {0};

int main(){
	int sum=10;
	scanf("%s", input);
	for(int i=1; i<strlen(input); i++){
		if(input[i] == input[i-1]) sum+=5;
		else sum+=10;
	}
	printf("%d", sum);
	return 0;
}
