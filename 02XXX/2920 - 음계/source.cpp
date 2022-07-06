#include <stdio.h>
#include <string.h>

char input[21] = {0};

int main(){
	fgets(input, 16, stdin);
	if(strcmp(input, "1 2 3 4 5 6 7 8") == 0) printf("ascending");
	else if(strcmp(input, "8 7 6 5 4 3 2 1") == 0) printf("descending");
	else printf("mixed");
	return 0;
}
