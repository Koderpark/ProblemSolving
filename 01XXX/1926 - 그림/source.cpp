#include <stdio.h>

int map[1000][1000] = {0};
int piccount=0;
int picarea=0; 
int tmp=0;

int fill(int x, int y){
	map[x][y] = 0;
	tmp++;
	if(map[x+1][y] == 1) fill(x+1,y);
	if(map[x-1][y] == 1) fill(x-1,y);
	if(map[x][y+1] == 1) fill(x,y+1);
	if(map[x][y-1] == 1) fill(x,y-1);
	return 1;
}

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) scanf("%d", &map[i][j]);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(map[i][j] != 0){
				tmp=0;
				piccount++;
				fill(i,j);
				if(tmp > picarea) picarea = tmp;
			}
		}
	}
	
	printf("%d\n%d", piccount, picarea);
	return 0;
}
