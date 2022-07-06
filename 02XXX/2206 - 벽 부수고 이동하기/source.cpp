#include <bits/stdc++.h>
using namespace std;

char arr[1234][1234] = {0};
int n,m;
int d[1234][1234][2] = {0};

int dx[] = { 0, 0,-1, 1};
int dy[] = {-1, 1, 0, 0};

struct s{
	int x;
	int y;
	bool flag;
};

queue<s> q;

int bfs(){
	while(!q.empty()){
		int x = q.front().x;
		int y = q.front().y;
		bool flag = q.front().flag;
		q.pop();
		
		if(x == n-1 && y == m-1) return d[x][y][flag];
		
		for(int i=0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			
			if(0<=nx && nx<n && 0<=ny && ny<m){
				if(d[nx][ny][flag]) continue;
				
				if(arr[nx][ny] == 0){
					d[nx][ny][flag] = d[x][y][flag] + 1;
					q.push({nx,ny,flag});
				}
				
				if(arr[nx][ny] == 1 && !flag){
					d[nx][ny][1] = d[x][y][flag] + 1;
					q.push({nx,ny,1});
				}
			}
		}
	}
	return -1;
}

int main(){
	scanf("%d %d\n", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%s", &arr[i]);
		for(int j=0; j<m; j++){
			arr[i][j] -= '0';
		}
	}
	
	//for(int i=0; i<n; i++,puts("")){ for(int j=0; j<m; j++) printf("%d", arr[i][j]); }
	
	q.push({0,0,0});
	d[0][0][0] = 1;
	printf("%d", bfs());
	return 0;
}
