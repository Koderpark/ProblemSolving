#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

int vis[234][234] = {0};
int N;

int dx[] = {-2,-2, 0, 0, 2, 2};
int dy[] = {-1, 1,-2, 2,-1, 1};

queue<pair<int,int>> q;

void find(int x, int y){
	q.push({x,y});
	vis[x][y] = 1;
	
	while(!q.empty()){
		int x = q.front().x;
		int y = q.front().y;
		q.pop();
		
		for(int i=0; i<6; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
		
			if(nx<0 || N<=nx || ny<0 || N<=ny) continue;
			if(vis[nx][ny]) continue;
			
			vis[nx][ny] = vis[x][y]+1;
			q.push({nx,ny});
		}
	}
	return;
}

int main(){
	cin >> N;
	int sx,sy,ex,ey;
	cin >> sx >> sy >> ex >> ey;
	
	find(sx,sy);
	
	cout << vis[ex][ey]-1;
}
