#include<stdio.h>

char array[19][19];
int main(){
	int length;
	int x, y;
	
	scanf("%d", &length);
	for(int i = 0; i < length; i++){
		scanf("%d %d", &x , &y);
		array[x-1][y-1] = 1;
	}
	
	for(int i = 0; i < 19; i++){
		for(int j = 0; j < 19; j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
