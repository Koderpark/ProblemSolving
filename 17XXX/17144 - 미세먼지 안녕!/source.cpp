#include <bits/stdc++.h>
using namespace std;

int arr[2][56][56] = {0};
int dx[4] = {-1, 1, 0, 0};
int dy[4] = { 0, 0,-1, 1};
int r,c,t;
int now, nxt;


void move1(int y){
	for(int i=y-1; i>0; i--){ arr[nxt][i+1][1] += arr[nxt][i][1]; arr[nxt][i][1] = 0; }
	for(int i=1; i<c; i++){   arr[nxt][1][i] += arr[nxt][1][i+1]; arr[nxt][1][i+1] = 0; }
	for(int i=1; i<y; i++){   arr[nxt][i][c] += arr[nxt][i+1][c]; arr[nxt][i+1][c] = 0; }
	for(int i=c; i>2; i--){   arr[nxt][y][i] += arr[nxt][y][i-1]; arr[nxt][y][i-1] = 0; }
	return;
}

void move2(int y){
	for(int i=y+1; i<r; i++){  arr[nxt][i][1] += arr[nxt][i+1][1]; arr[nxt][i+1][1] = 0; }
	for(int i=1; i<c; i++){    arr[nxt][r][i] += arr[nxt][r][i+1]; arr[nxt][r][i+1] = 0; }
	for(int i=r-1; i>=y; i--){ arr[nxt][i+1][c] += arr[nxt][i][c]; arr[nxt][i][c] = 0; }
	for(int i=c; i>2; i--){    arr[nxt][y][i] += arr[nxt][y][i-1]; arr[nxt][y][i-1] = 0; }
	return;
}

int main(){
	scanf("%d %d %d", &r, &c, &t);
	for(int i=1; i<=r; i++){
		for(int j=1; j<=c; j++){
			scanf("%d", &arr[0][i][j]);
		}
	}
	
	for(int i=0; i<t; i++){
		now = i%2;
		nxt = (i+1)%2;
		
		for(int y=0; y<=r; y++) for(int x=0; x<=c; x++) arr[nxt][y][x] = 0;
		
		for(int y=1; y<=r; y++){
			for(int x=1; x<=c; x++){
				if(arr[now][y][x] == -1) arr[nxt][y][x] = -1;
				else if(arr[now][y][x] != 0){
					int cnt = 0;
					for(int k=0; k<4; k++){
						int nx = x+dx[k];
						int ny = y+dy[k];
						
						if(nx<=0 || ny<=0 || nx>c || ny>r) continue;
						if(arr[now][ny][nx] == -1) continue;
						arr[nxt][ny][nx] += (arr[now][y][x]/5);
						cnt += (arr[now][y][x]/5);
						
					}
					arr[nxt][y][x] += arr[now][y][x] - cnt;
				} 
			}
		}
		
		int y1=0;
		int y2=0;
		for(int k=1; k<=r; k++){
			if(arr[nxt][k][1] == -1){
				if(y1 == 0) y1 = k;
				else y2 = k;
			}
		}
		
		arr[nxt][y1-1][1] = 0;
		arr[nxt][y2+1][1] = 0;
		move1(y1);
		move2(y2);
	}
	

	//puts("------------------------");
	//for(int i=1; i<=r; i++,puts("")) for(int j=1; j<=c; j++) printf("%d ", arr[nxt][i][j]);
	
	int answer = 0;
	for(int i=1; i<=r; i++) for(int j=1; j<=c; j++) answer += arr[nxt][i][j];
	printf("%d", answer+2);
	return 0;
}
