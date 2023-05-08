#include <stdio.h>

int main(){
	char c[101] = {0};
	while(fgets(c, 100, stdin) != NULL) printf("%s", c);
	return 0;
}
