#include <stdio.h>
#include <string.h>

char arr1[123][123] = {0};
char arr2[123][123] = {0};
int vis[123][123] = {0};
int n;

int dx[] = { 1, 0,-1, 0};
int dy[] = { 0, 1, 0,-1};

void dfs(int x, int y, int num){
	vis[x][y] = 1;
		
	for(int i=0; i<4; i++){
		int nx = x+dx[i];
		int ny = y+dy[i];
			
		if(0<=nx&&nx<n && 0<=ny&&ny<n){
			if(vis[nx][ny]) continue;
			if(num==1) if(arr1[nx][ny] == arr1[x][y]) dfs(nx,ny,num);
			if(num==2) if(arr2[nx][ny] == arr2[x][y]) dfs(nx,ny,num);
		}
	}
	return;
}

int main(){
	int ansA=0;
	int ansB=0;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){ scanf("%s", &arr1[i]); }
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr1[i][j] == 'G') arr2[i][j] = 'R';
			else arr2[i][j] = arr1[i][j];
		}
	}
	
	memset(vis,0,sizeof(vis));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(!vis[i][j]){
				dfs(i,j,1);
				ansA++;
			}
		}
	}
	
	memset(vis,0,sizeof(vis));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(!vis[i][j]){
				dfs(i,j,2);
				ansB++;
			}
		}
	}
	
	printf("%d %d", ansA, ansB);
	return 0;
}
