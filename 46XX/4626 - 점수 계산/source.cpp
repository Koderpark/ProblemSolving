#include <stdio.h>

int main(){
	int n;
	int sum = 0, score = 0;
	int arr[101] = {0};
	
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
	
	for(int i=1; i<=n; i++){
		if(arr[i] == 0) sum=0;
		if(arr[i] == 1){
			if(arr[i-1] == 1) sum++;
			else			  sum = 1;
		}
		score+=sum;
	}
	
	printf("%d", score);
}
