#include <stdio.h>

int main(){
	int grade, half, num;
	scanf("%d %d %d", &grade, &half, &num);
	for(int i=0; i<(half%2?1:2); i++) printf("%d%d%d%c", grade, half, num, (i?'\n':' '));
	return 0;
}
