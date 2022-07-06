#include <stdio.h>

int main(){
	int arr[9][9] = {0};
	int x1,y1;
	int x2,y2;
	int x3,y3;
	
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);
	
	for(int i=0; i<=8; i++)	arr[4][i] = 1;
	
	arr[x1][y1] = 2;
	arr[x2][y2] = 2;
	arr[x3][y3] = 2;
	
	for(int i=0; i<3; i++){
		for(int i=1; i<=7; i++){
			for(int j=1; j<=7; j++){
				if(arr[i][j] == 2 && ((arr[i][j-1] != 0&&arr[i][j+1] != 0)||(arr[i-1][j] != 0&&arr[i+1][j] != 0))){
					for(int k=0; k<=8; k++) if(arr[i][k] != 2) arr[i][k] = 1;
					for(int k=0; k<=8; k++) if(arr[k][j] != 2) arr[k][j] = 1;
				}
			}
		}	
	}
	
	for(int i=1; i<=7; i++, puts(""))	for(int j=1; j<=7; j++) printf("%d ", arr[i][j]);
}
