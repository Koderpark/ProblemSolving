#include <stdio.h>

int main(){
	int n;
	char score;
	scanf("%d", &n);
	if(1) 		score = 'D';
	if(n >= 40) score = 'C';
	if(n >= 70) score = 'B';
	if(n >= 90) score = 'A';
	printf("%c", score);
	return 0;
}
