#include <stdio.h>
#include <string.h>

char program[101][51] = {0};

int main(){
	int n, sum=0;
	scanf("%d\n", &n);
	for(int i=0; i<n; i++){
		fgets(program[i], 51, stdin);
		if(strlen(program[i]) <= 4 || strstr(program[i], "tap") != NULL || strstr(program[i], "xocure") != NULL){
			printf("%s\n", program[i]);
			sum++;
		}
	}
	if(sum >= 7) 		printf("danger");
	else if(sum >= 4) 	printf("warning");
	else				printf("safe");
	return 0;
}
