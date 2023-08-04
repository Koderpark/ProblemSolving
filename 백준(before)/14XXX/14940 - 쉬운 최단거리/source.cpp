#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int ans[1234][1234] = {0};
int in[1234][1234] = {0};

int N,M;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

void bfs(int a, int b){
	memset(ans, -1, sizeof(ans));
	queue<pair<int,int>> q;
	q.push({a,b});
	ans[a][b] = 0;
	
	while(!q.empty()){
		int x = q.front().x;
		int y = q.front().y;
		q.pop();
		
		for(int i=0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			
			if(nx==0 || nx==N+1 || ny==0 || ny==M+1) continue;
			
			if(ans[nx][ny] == -1 && in[nx][ny]){
				ans[nx][ny] = ans[x][y]+1;
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
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			cin >> in[i][j];
			if(in[i][j] == 2){
				a = i;
				b = j;
			}
		}
	}
	
	bfs(a,b);
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			if(in[i][j]==0 && ans[i][j]==-1) cout << "0 ";
			if(in[i][j]!=0 && ans[i][j]==-1) cout << "-1 ";
			if(ans[i][j]!=-1) cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
