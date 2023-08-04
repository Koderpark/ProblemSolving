#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

string in[678];
bool vis[678][678];

int N,M;
int ans = 0;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

void bfs(int a, int b){
	memset(vis, 0, sizeof(vis));
	queue<pair<int,int>> q;
	q.push({a,b});
	vis[a][b] = true;
	
	while(!q.empty()){
		int x = q.front().x;
		int y = q.front().y;
		q.pop();
		
		if(in[x][y] == 'P') ans++;
		
		for(int i=0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			
			if(nx==-1 || nx==N || ny==-1 || ny==M) continue;
			
			if(!vis[nx][ny] && in[nx][ny] != 'X'){
				vis[nx][ny] = true;
				q.push({nx,ny});	
			}
		}
	}
	return;
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a,b;
	cin >> N >> M;
	
	for(int i=0; i<N; i++){
		cin >> in[i];
		for(int j=0; j<M; j++){
			if(in[i][j] == 'I'){
				a = i;
				b = j;
			}
		}
	}
	
	bfs(a,b);
	if(ans == 0) cout << "TT";
	else cout << ans;
	return 0;
}
