#include<stdio.h>
#include<windows.h>

char array[20][20] = {
      { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
      { 1, 0, 0, 1, 0, 0, 0, 0, 0, 1 },
      { 1, 0, 0, 1, 1, 1, 0, 0, 0, 1 },
      { 1, 0, 0, 0, 0, 0, 0, 1, 0, 1 },
      { 1, 0, 0, 0, 0, 0, 0, 1, 0, 1 },
      { 1, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
      { 1, 0, 0, 0, 0, 1, 2, 0, 0, 1 },
      { 1, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
      { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
      { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
};
int pointx, pointy;

int main(){
	for(int i=0; i<10 ; i++){
		for(int j=0; j<10 ; j++){
			scanf("%d",  &array[i][j]);
		}
	}
	
	pointx = 1;
	pointy = 1;
	while(array[pointx][pointy] != 2 && array[pointx][pointy] != 1){
		array[pointx][pointy]=9;
		if(array[pointx][pointy+1] == 1)pointx++; 
		else pointy++;
	}
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	

	
}
