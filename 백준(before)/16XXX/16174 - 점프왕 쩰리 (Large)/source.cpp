#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int dx[] = {1,0};
int dy[] = {0,1};

int n;
int arr[123][123] = {0};
int vis[123][123] = {0};

void bfs(int a, int b){
	memset(vis, 0, sizeof(vis));
	queue<pair<int,int>> q;
	q.push({a,b});
	vis[a][b] = 1;
	
	while(!q.empty()){
		int x = q.front().x;
		int y = q.front().y;
		q.pop();
		
		for(int i=0; i<2; i++){
			int nx = x + dx[i]*arr[x][y];
			int ny = y + dy[i]*arr[x][y];
			
			if(!(1<=nx && nx<=n) || !(1<=ny && ny<=n)) continue;
			
			if(vis[nx][ny] != 1){
				vis[nx][ny] = 1;
				q.push({nx,ny});
			}
		}
	}
}

int main(){
	cin >> n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> arr[i][j];
		}
	}
	
	bfs(1,1);
	
	if(vis[n][n] == 0) cout << "Hing";
	else cout << "HaruHaru";
}
