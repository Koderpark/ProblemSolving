#include <stdio.h>
#include <stdlib.h>

int main(){
	char *array = (char*)malloc(sizeof(char) * 100);
	int s,e;
	
	scanf("%s", array);
	scanf("%d %d", &s, &e);
	
	for(int i=s-1; i<e; i++) printf("%c", *(array+i));
	
	free(array);
	return 0;
}
