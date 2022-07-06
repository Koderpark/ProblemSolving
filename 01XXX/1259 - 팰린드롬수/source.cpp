#include <stdio.h>
#include <string.h>

char input[6] = {0};
bool flag = true;
int len = 0;

int main(){
	while(1){
		flag = true;
		
		scanf("%s", input);
		
		if(strcmp(input, "0") == 0) break;
		
		len = strlen(input);
		
		for(int i=0; i<len/2; i++) if(input[i] != input[len-i-1]) flag = false;
		
		if(flag) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
