#include <stdio.h>
#include <string.h>

int main(){
	char c[101] = {0};
	scanf("%s", c);
	int len = strlen(c);
	for(int i=0; i<len; i++){
		if(i%10 == 0 && i!=0)puts("");
		printf("%c", c[i]);
	}
	return 0;
}
