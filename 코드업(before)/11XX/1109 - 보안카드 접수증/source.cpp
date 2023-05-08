#include <stdio.h>

int main(){
	char name[21] = {0};
	int age;
	char code;
	float pass;
	
	scanf("%s\n", &name);
	scanf("%d\n", &age);
	scanf("%c\n", &code);
	scanf("%g", &pass);
	
	printf("%s\n", name);
	printf("%d\n", age);
	printf("%c\n", code);
	printf("%g\n", pass);
	return 0;
}
