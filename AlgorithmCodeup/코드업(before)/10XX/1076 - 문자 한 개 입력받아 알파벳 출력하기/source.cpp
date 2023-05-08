#include <stdio.h>

int main(){
	char c;
	scanf("%c", &c);
	for(int i=97; i<=c; i++){
		printf("%c ", i);
	}
	return 0;
}
