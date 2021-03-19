#include <stdio.h>

int main(){
	int x1,y1,x2,y2;
	int arr[101][101] = {0};
	int sum=0;
	
	for(int i=0; i<4; i++){
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for(int i=x1; i<x2; i++){
			for(int j=y1; j<y2; j++){
				arr[i][j] = 1;
			}
		}
	}
	
	for(int i=0; i<101; i++){
		for(int j=0; j<101; j++)sum+=arr[i][j];
	}
	printf("%d", sum);
}
