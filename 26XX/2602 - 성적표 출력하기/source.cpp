#include <stdio.h>

int arr[4][4];

int main(){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++) scanf("%d", &arr[i][j]);
		arr[i][3] = arr[i][0] + arr[i][1] + arr[i][2];
	}
	for(int i=0; i<4; i++) arr[3][i] = arr[2][i] + arr[1][i] + arr[0][i];
	for(int i=0; i<4; i++, puts("")){
		for(int j=0; j<4; j++){
			printf("%d ", arr[i][j]);
		}
	}
	return 0;
}
