#include <stdio.h>

int score[1001] = {0};

int main(){
	int n, sum;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &score[i]);
	for(int i=0; i<n; i++){
		sum=1;
		for(int j=0; j<n; j++){
			if(score[i] < score[j]) sum++;
		}
		printf("%d %d\n", score[i], sum);
	}
	return 0;
}
