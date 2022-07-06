#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char arr[151][1000] = {0};
char *text;

int main(){
	int n, age = 0, sum = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", &arr[i]);
		text = strtok(arr[i], ",");
		text = strtok(NULL, ",");
		text = strtok(NULL, ",");
		age+=atoi(text);
		sum++;
	}
	printf("%.2f",(float)age/sum);
	return 0;
}
