#include<stdio.h>

int main(){
	int h, w;
	int l, d, x, y;
	int n;
	
	scanf("%d %d", &h, &w);
	unsigned char array[150][150];
	
	for(int i=0 ; i<=h+1 ; i++){	for(int j=0 ; j<=w+1 ; j++){	array[i][j] = 0;	}	}
	
	scanf("%d", &n);
	for(int i=0 ; i<n ; i++){
		scanf("%d %d %d %d", &l, &d, &x, &y);
			if(d == 0)	   {	for(int j=1 ; j<=l ; j++){	array[x][y++] = 1;	}	}
			else if(d == 1){	for(int j=1 ; j<=l ; j++){	array[x++][y] = 1;	}	}
	}
	
	for(int i=1 ; i<=h ; i++){
		for(int j=1 ; j<=w ; j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
