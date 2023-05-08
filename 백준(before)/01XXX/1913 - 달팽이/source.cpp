#include <stdio.h>

int arr[1001][1001] = {0};

int main(){
	int n,k;
	scanf("%d", &n);
	scanf("%d", &k);
	int x = n/2+1;
	int y = n/2+1;
	int dir = 0;
	int posx=0, posy=0;
	
	for(int i=1; i<=n*n; i++){	
		switch(dir){
			case 0:{ arr[x][y] = i; if(!arr[x-1][y] && !arr[x-1][y+1] && !arr[x-1][y-1]) dir = (dir+1)%4; x--; break; }
			case 1:{ arr[x][y] = i; if(!arr[x-1][y+1] && !arr[x][y+1] && !arr[x+1][y+1]) dir = (dir+1)%4; y++; break; }
			case 2:{ arr[x][y] = i; if(!arr[x+1][y-1] && !arr[x+1][y] && !arr[x+1][y+1]) dir = (dir+1)%4; x++; break; }
			case 3:{ arr[x][y] = i; if(!arr[x+1][y-1] && !arr[x-1][y-1] && !arr[x][y-1]) dir = (dir+1)%4; y--; break; }
		}
	}
	
	for(int i=1; i<=n; i++,puts("")){
		for(int j=1; j<=n; j++){
			printf("%d ", arr[i][j]);
			if(arr[i][j] == k){
				posx = i;
				posy = j;
			}
		}
	}
	printf("%d %d", posx, posy);
	return 0;
}
