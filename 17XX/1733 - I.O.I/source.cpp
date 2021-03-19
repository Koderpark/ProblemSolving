#include <stdio.h>
#include <string.h>

int main(){
	char text[11] = {0};
	scanf("%s", &text);
	printf(!strcmp(text, "IOI")? "IOI is the International Olympiad in Informatics." : "I don't care.");
	return 0;
}
