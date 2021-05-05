#include <bits/stdc++.h>
using namespace std;

int arr[25][25] = {0};
char tmp[25] = {0};
int r,c;

int dx[] = {-1, 1, 0, 0};
int dy[] = { 0, 0,-1, 1};

int maxv = -1;

int dfs(int x, int y, int bit, int k){
	maxv = max(maxv, k);
	for(int i=0; i<4; i++){
		int nx = x+dx[i];
		int ny = y+dy[i];
		
		if(0>=nx || nx>r || 0>=ny || ny>c) continue;
		
		if(!(bit & (1<<arr[nx][ny]))){
			dfs(nx,ny, bit | (1<<arr[nx][ny]), k+1);
		}
	}
	return 0;
}

int main(){
	scanf("%d %d", &r, &c);
	for(int i=1; i<=r; i++){
		scanf("%s", &tmp);
		for(int j=1; j<=c; j++) arr[i][j] = tmp[j-1] -= 'A';
	}
	
	//for(int i=1; i<=r; i++,puts("")) for(int j=1; j<=c; j++) printf("%d", arr[i][j]);
	
	dfs(1,1,1<<(arr[1][1]),1);
	printf("%d", maxv);
	return 0;
}
