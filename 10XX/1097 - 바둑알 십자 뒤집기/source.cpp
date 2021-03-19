#include<stdio.h>

char array[100][100];
int main(){
	int a;
	for(int i=0 ; i<19 ; i++){	for(int j=0 ; j<19 ; j++){	scanf("%d", &array[i][j]);	}  }
	int time;
	int x,y;
	
	scanf("%d", &time);
	for(int i=0 ; i<time ; i++){	
		scanf("%d %d", &x , &y);
		x--;
		y--;	
		for(int i=0 ; i<19 ; i++){	if(array[i][y] == 0) array[i][y] = 1; else array[i][y] = 0;	}//세로줄 값바꾸기 
		for(int j=0 ; j<19 ; j++){	if(array[x][j] == 0) array[x][j] = 1; else array[x][j] = 0;	}//가로줄 값바꾸기 
	}

	for(int i=0 ; i<19 ; i++){
		for(int j=0 ; j<19 ; j++){	printf("%d ", array[i][j]);	} 
		if(i != 18)printf("\n");
	}
}
