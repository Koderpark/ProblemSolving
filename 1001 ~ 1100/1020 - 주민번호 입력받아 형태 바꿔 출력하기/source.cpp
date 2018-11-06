#include <stdio.h>

int main(){
	int front, back;
	scanf("%d-%d", &front, &back);
	printf("%06d%07d", front, back);
}
