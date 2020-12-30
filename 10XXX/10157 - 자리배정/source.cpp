#include <stdio.h>

int arr[1010][1010] = {0};

int c, r;
int n;

void fill(int x, int y, int k, int dir){
	arr[x][y] = k;
	
	if(k==c*r) return;
	
	if(dir == 0){ // 위로 
		if(y==r || arr[x][y+1] != 0) return fill(x+1,y,k+1,1);
		else return fill(x,y+1,k+1,0);
	}
	if(dir == 1){ // 오른쪽으로 
		if(x==c || arr[x+1][y] != 0) return fill(x,y-1,k+1,2);
		else return fill(x+1,y,k+1,1);
	}
	if(dir == 2){ // 아래쪽으로 
		if(y==1 || arr[x][y-1] != 0) return fill(x-1,y,k+1,3);
		else return fill(x,y-1,k+1,2);
	}
	if(dir == 3){ // 왼쪽으로 
		if(x==1 || arr[x-1][y] != 0) return fill(x,y+1,k+1,0);
		else return fill(x-1,y,k+1,3);
	}
}

int main(){
	scanf("%d %d", &c, &r);
	scanf("%d", &n);
	
	if(c*r < n){
		printf("0");
		return 0;
	}
	
	fill(1,1,1,0);
	
	for(int i=1; i<=c; i++){
		for(int j=1; j<=r; j++){
			if(arr[i][j] == n){
				printf("%d %d", i, j);
			}
		}
	}
	return 0;
}
