#include <stdio.h>
#include <queue>
#include <utility>

#define dx pos.first+i
#define dy pos.second+j

using namespace std;

queue<pair<int,int>> q;

char arr[11][11] = {0};
int board[12][12] = {0};
int visit[12][12] = {0};


bool check(int x, int y){
	if(board[x][y] == 0) return false;
	
	int d1=0;
	int d2=0;
	int d3=0;
	int d4=0;
	for(int i=-1; i<=1; i++){
		d1 += board[x+1][y+i];
		d2 += board[x-1][y+i];
		d3 += board[x+i][y+1];
		d4 += board[x+i][y-1];
	}
	if(d1 == 3 && d2 == 0 && d3 == 1 && d4 == 1) return true;
	if(d2 == 3 && d1 == 0 && d3 == 1 && d4 == 1) return true;
	if(d3 == 3 && d4 == 0 && d1 == 1 && d2 == 1) return true;
	if(d4 == 3 && d3 == 0 && d1 == 1 && d2 == 1) return true;
	
	if(board[x+1][y] == 1 && board[x][y+1] == 1 && d2==0 && d4==0) return true;
	if(board[x-1][y] == 1 && board[x][y+1] == 1 && d1==0 && d4==0) return true;
	if(board[x+1][y] == 1 && board[x][y-1] == 1 && d2==0 && d3==0) return true;
	if(board[x-1][y] == 1 && board[x][y-1] == 1 && d1==0 && d3==0) return true;
	return false;
}

void bfs(){
	while(!q.empty()){
		pair<int,int> pos = q.front();
		visit[pos.first][pos.second] = 1;
		q.pop();
		for(int i=-1; i<=1; i++){
			for(int j=-1; j<=1; j++){
				if(i==j && i==0) continue;
				if(board[dx][dy] == 1 && !visit[dx][dy]){
					q.push({dx, dy});
					board[dx][dy] = board[pos.first][pos.second] + 1;
				}
			}
		}
	}
}

int main(){
	for(int i=0; i<10; i++) scanf("%s", &arr[i]);
	for(int i=0; i<10; i++) for(int j=0; j<10; j++) board[i+1][j+1] = arr[i][j] - '0';
	
	for(int i=1; i<=10; i++){
		for(int j=1; j<=10; j++){
			if(check(i,j)){
				q.push({i,j});
				bfs();
				printf("%d %d\n", i,j);
			}
		}
	}
	
	for(int i=1; i<=10; i++,puts("")){
		for(int j=1; j<=10; j++){
			printf("%d", board[i][j]);
		}
	}
	return 0;
}
