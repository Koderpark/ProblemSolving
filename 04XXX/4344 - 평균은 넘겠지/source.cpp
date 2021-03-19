#include <stdio.h>

int score[1001];

int main(){
	int c;
	int n,cnt;
	float sum;
	scanf("%d", &c);
	for(int i=0; i<c; i++){
		scanf("%d", &n);
		sum=0;
		cnt=0;
		for(int j=0; j<1001; j++) score[j] = 0;
		for(int j=0; j<n; j++){
			scanf("%d", &score[j]);
			sum += (float)score[j];
		}
		sum/=(float)n;
		for(int j=0; j<n; j++) if((float)score[j] > sum) cnt++;
		printf("%.3f%%\n", cnt/(float)n * 100);
	}
}
