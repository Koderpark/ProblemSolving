#include <stdio.h>
#include <string.h>

char res[81];
int score[81];
int n;
int sum;

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", res);
		sum=0;
		for(int j=0; j<81; j++) score[j] = 0;
		for(int j=0; j<strlen(res); j++){
			if(res[j] == 'O'){
				score[j] = score[j-1]+1;
				sum+=score[j];
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
