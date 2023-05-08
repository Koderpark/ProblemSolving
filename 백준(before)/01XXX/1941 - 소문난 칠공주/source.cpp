#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

bool vis[6][6] = {false};
bool pos[30] = {false};
pair<int,int> point;
queue<pair<int,int>> q;

string board[6];

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

bool isconn(){
	memset(vis, 0, sizeof(vis));
	
	int cnt = 1;
	q.push(point);
	vis[point.x][point.y] = true;
	
	while(!q.empty()){
		int x = q.front().x;
		int y = q.front().y;
		q.pop();
		
		for(int i=0; i<4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(!(0<=nx&&nx<5) || !(0<=ny&&ny<5)) continue;
			
			if(!vis[nx][ny] && pos[nx*5+ny]){
				cnt++;
				q.push({nx,ny});
				vis[nx][ny] = true;
			}
		}
	}
	return cnt == 7;
}

int main(){
	for(int i=0; i<5; i++) cin >> board[i];
	for(int i=0; i<7; i++) pos[i] = true;
	
	int ans = 0;
	int som = 0;
	do{
		som = 0;
		for(int i=0; i<25; i++){
			if(pos[i]){
				point = {i/5, i%5};
				if(board[i/5][i%5] == 'S') som++;
			}
		}
		if(som < 4) continue;
		if(isconn()) ans++;
	}while(prev_permutation(pos,pos+25));
	
	cout << ans;
	return 0;
}
