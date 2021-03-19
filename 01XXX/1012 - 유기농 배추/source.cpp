#include <stdio.h>

int map[51][51];
int t,k,m,n,x,y,sum;

int fill(int x, int y){
	map[x][y] = 0;
	if(map[x+1][y] == 1) fill(x+1,y);
	if(map[x-1][y] == 1) fill(x-1,y);
	if(map[x][y+1] == 1) fill(x,y+1);
	if(map[x][y-1] == 1) fill(x,y-1);
	return 0;
}

int main(){
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		sum=0;
		scanf("%d %d", &m, &n);
		scanf("%d", &k);
		for(int i=0; i<m; i++) for(int j=0; j<n; j++) map[i][j] = 0;
		for(int i=0; i<k; i++){
			scanf("%d %d", &x, &y);
			map[x][y] = 1;
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				if(map[i][j] == 1){
					fill(i,j);
					sum++;
				}
			}
		}
		printf("%d\n", sum);
	}
}
