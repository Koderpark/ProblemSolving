#include <stdio.h>

int main(){
	int time,score;
	scanf("%d %d", &time, &score);
	for(int i=time; i<90; i+=5, score++);
	printf("%d", score);
	return 0;
}
