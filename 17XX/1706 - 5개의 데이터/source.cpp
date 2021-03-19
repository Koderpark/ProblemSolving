#include <stdio.h>

int num[5] = {0};

int main(){
	for(int i=0; i<5; i++) scanf("%d", &num[i]);
	for(int i=0; i<5; i++) printf("%d ", num[4-i]);
	return 0;
}
