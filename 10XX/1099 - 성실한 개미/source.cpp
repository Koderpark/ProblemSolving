#include<stdio.h>

char array[20][20] = {0};
int pointx = 1, pointy = 1;

int main(){
	for(int i=0; i<10 ; i++){
		for(int j=0; j<10 ; j++){
			scanf("%d",  &array[i][j]);
		}
	}
	while(array[pointx][pointy] != 2 && array[pointx][pointy] != 1){
		array[pointx][pointy]=9;
		if(array[pointx][pointy+1] == 1)pointx++; 
		else pointy++;
	}
	if(array[pointx][pointy] == 2) array[pointx][pointy]=9;
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
