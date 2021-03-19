#include <stdio.h>
#include <string.h>

char arr[151][1000] = {0};
char *text;

int main(){
	int n, female = 0, male = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", &arr[i]);
		text = strtok(arr[i], ",");
		text = strtok(NULL, ",");
		if(strcmp(text, "F") == 0) female++;
		else male++;
	}
	printf("%d\n%d",male, female);
	return 0;
}
