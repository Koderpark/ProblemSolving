#include <stdio.h>

int main(){
	float percent[3] = {0};
	int score[3] = {0};
	
	scanf("%f %d", &percent[0], &score[0]);
	scanf("%f %d", &percent[1], &score[1]);
	scanf("%f %d", &percent[2], &score[2]);
	
	printf("%.1f", (percent[0]*score[0])+(percent[1]*score[1])+(percent[2]*score[2]));
	return 0;
}
