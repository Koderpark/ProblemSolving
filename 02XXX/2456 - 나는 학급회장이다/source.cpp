#include <stdio.h>

int main(){
	int n;
	int arr[3]   = {0};
	int score[3] = {0};
	int tmp,max=-1,ptr;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			scanf("%d", &tmp);
			arr[j] += tmp;
			score[j] += tmp==3?10000:tmp==2?100:1;
		}
	}
	for(int i=0; i<3; i++){ if(max < score[i]){ max = score[i]; ptr = i; } }
	
	if(score[0] == score[1] && score[0] == score[2]) printf("0 %d", arr[0]);
	else printf("%d %d", ptr+1, arr[ptr]);
	return 0;
}
