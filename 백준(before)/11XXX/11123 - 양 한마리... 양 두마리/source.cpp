#include <bits/stdc++.h>
using namespace std;

string s[123];
bool vis[123][123] = {0};

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int N,M;

void find(int x, int y){
	for(int i=0; i<4; i++){
		int nx = x+dx[i];
		int ny = y+dy[i];
		
		if(nx == -1 || ny == -1 || nx == N || ny == M) continue;
		if(!vis[nx][ny] && s[nx][ny] == '#'){
			vis[nx][ny] = true;
			find(nx,ny);
		}
	}
	return;
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T;
	cin >> T;
	while(T--){
		for(int i=0; i<123; i++) s[i] = "";
		memset(vis, 0, sizeof(vis));
		int ans = 0;
		
		cin >> N >> M;
		for(int i=0; i<N; i++) cin >> s[i];
		
		for(int i=0; i<N; i++){
			for(int j=0; j<M; j++){
				if(s[i][j] == '#' && !vis[i][j]){
					vis[i][j] = true;
					find(i,j);
					ans++;
				}
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
