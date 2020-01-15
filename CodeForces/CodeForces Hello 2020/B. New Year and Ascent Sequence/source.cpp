#include <stdio.h>

int arr[100001] = {0};

int main(){
	int time;
	int p=0;
	int time2;
	int tmp;
	int sum=0;
	
	scanf("%d", &time);
	for(int i=0; i<time; i++){
		scanf("%d", &time2);
		for(int j=0; j<time2; j++, p++){
			scanf("%d", &tmp);
			arr[p] = tmp;
		}	
	}
	for(int i=0; i<p; i++){
		for(int j=i+1; j<p; j++){
			if(arr[j] > arr[i]) sum++;
			printf("plus\n", arr[i]);
		}
	}
	printf("%d", sum);
	return 0;
}
