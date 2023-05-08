#include <stdio.h>

int board[51][51] = {0};

int main(){
	int n, m, cnt, tmp;
	int min = 99999;
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<n; i++){
		scanf("%c", &tmp);
		for(int j=0; j<m; j++){
			scanf("%c", &board[i][j]);
		}
	}
	
	for(int sx=0; sx < n-7; sx++){
		for(int sy=0; sy < m-7; sy++){
			cnt = 0;
			for(int x=0; x<8; x++){
				for(int y=0; y<8; y++){
					if     ( (x+y)%2 == 1 ) { if(board[sx+x][sy+y] == 'B'){ cnt++; } }
					else if( (x+y)%2 == 0 ) { if(board[sx+x][sy+y] == 'W'){ cnt++; } }
				}
			}
			if(min > cnt) min = cnt;
			if(min > (64-cnt)) min = (64-cnt);
		}
	}
	
	printf("%d", min);
	return 0;
}
