#include <stdio.h>

int arr[1010][1010] = {0};

int c, r;
int n;

int fill(int x, int y, int k, int dir){
	arr[x][y] = k;
	
	if(k==c*r) return 0;
	
	if(dir == 0){
		if(y==r || arr[x][y+1] != 0) return fill(x+1,y,k+1,1);
		else return fill(x,y+1,k+1,0);
	}
	if(dir == 1){
		if(x==c || arr[x+1][y] != 0) return fill(x,y-1,k+1,2);
		else return fill(x+1,y,k+1,1);
	}
	if(dir == 2){
		if(y==1 || arr[x][y-1] != 0) return fill(x-1,y,k+1,3);
		else return fill(x,y-1,k+1,2);
	}
	if(dir == 3){
		if(x==1 || arr[x-1][y] != 0) return fill(x,y+1,k+1,0);
		else return fill(x-1,y,k+1,3);
	}
}

int main(){
	scanf("%d %d", &c, &r);
	scanf("%d", &n);
	
	fill(1,1,1,0);
	
	int x=0, y=0;
	for(int i=1; i<=c; i++){
		for(int j=1; j<=r; j++){
			if(arr[i][j] == n){ x = i; y = j; }
		}
	}
	if(!x && !y) { printf("0"); }
	else         { printf("%d %d", x, y); }
	return 0;
}
