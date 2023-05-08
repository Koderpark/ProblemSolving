#include <stdio.h>
#include <string.h>

char arr[151][1000] = {0};
char *text;

int main(){
	int n, sum = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", &arr[i]);
		text = strtok(arr[i], ",");
		text = strtok(NULL, ",");
		text = strtok(NULL, ",");
		text = strtok(NULL, ",");
		while(text != NULL){
			text = strtok(NULL, ",");
			sum++;
		}
	}
	printf("%.2f",(float)sum/n);
	return 0;
}
