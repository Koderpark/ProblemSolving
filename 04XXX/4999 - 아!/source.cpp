#include <stdio.h>
#include <string.h>

char input[1001] = {0};
char doctor[1001] = {0};

int main(){
	scanf("%s", input);
	scanf("%s", doctor);
	if(strlen(input) >= strlen(doctor)) printf("go");
	else printf("no");
	return 0;
}
