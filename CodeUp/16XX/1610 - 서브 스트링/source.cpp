#include <stdio.h> 

char *mysubstr(char *str, int start, int count){
	for(int i=0; i<count; i++) printf("%c", str[i+start]);
	return 0;	
}

int main(){
	char str[101] = {0};
	int start;
	int count;
	scanf("%s", &str);
	scanf("%d %d", &start, &count);
	mysubstr(str, start, count);
	return 0;
}
