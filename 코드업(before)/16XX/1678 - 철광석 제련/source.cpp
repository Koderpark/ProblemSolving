#include <stdio.h>

int arr[5][5] = {0};

int arradd(int i, int j){
	return arr[i][j] + 
		   arr[i][j-1] + 
		   arr[i][j+1] +
		   arr[i-1][j] + 
		   arr[i-1][j-1] +
		   arr[i-1][j+1] + 
		   arr[i+1][j] + 
		   arr[i+1][j-1] + 
		   arr[i+1][j+1];
}

int main(){
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int max = 0;
	for(int i=1; i<=3; i++){
		for(int j=1; j<=3; j++){
			if(max < arradd(i,j)){
				max = arradd(i,j);
			}
		}
	}
	printf("%d", max);
	return 0;
}
