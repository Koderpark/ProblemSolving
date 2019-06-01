#include <stdio.h>
#include <string.h>

char arr[150][3000] = {0};
char *text;
char find[3000] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)	scanf("%s", &arr[i]);
	scanf("%s", &find);
	for(int i=0; i<n; i++){
		text = strtok(arr[i], ",");
		if(!strcmp(text, find)){
			text = strtok(NULL, ",");
			text = strtok(NULL, ",");
			while(text != NULL){
				text = strtok(NULL, ",");
				puts(text);
			}
		}
	}
	return 0;
}
