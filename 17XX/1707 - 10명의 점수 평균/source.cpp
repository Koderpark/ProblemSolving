#include <stdio.h>

int score[10] = {0};

int main(){
	int plus=0, minus=0;
	float sum=0;
	for(int i=0; i<10; i++){
		scanf("%d", &score[i]);
		sum+=score[i];
	}
	sum/=10;
	for(int i=0; i<10; i++){
		if(sum <= score[i]) plus++;
		else minus++;
	}
	printf("%.1f\n%d %d", sum, plus, minus);
	
}
