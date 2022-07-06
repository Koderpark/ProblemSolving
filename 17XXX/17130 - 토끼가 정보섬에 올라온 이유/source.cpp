#include <bits/stdc++.h>
#define INF 998244353
using namespace std;

int dp[1234][1234] = {0};

string m[1234];

vector<pair<int,int>> out;
pair<int,int> rabbit;

queue<pair<int,int>> q;

int N,M;

int dx[] = {1,0,-1};
int dy[] = {1,1,1};

void bfs(){
	q.push({rabbit.first, rabbit.second});
	dp[rabbit.first][rabbit.second] = 0;
	
	while(!q.empty()){
		auto pos = q.front(); q.pop();
		//printf("[%d %d]\n", pos.first, pos.second);
		for(int i=0; i<3; i++){
			int nx = pos.first + dx[i];
			int ny = pos.second + dy[i];
			if(nx<0 || nx>=N) continue;
			if(ny<0 || ny>=M) continue;
			
			if(dp[nx][ny] < dp[pos.first][pos.second]+1 && m[nx][ny] == 'C'){
				q.push({nx,ny});
				dp[nx][ny] = dp[pos.first][pos.second]+1;
			}
			else if(dp[nx][ny] < dp[pos.first][pos.second] && m[nx][ny] != '#'){
				q.push({nx,ny});
				dp[nx][ny] =  dp[pos.first][pos.second];
			}
		}
	}
	return;
}

int main(){
	for(int i=0; i<1234; i++){
		for(int j=0; j<1234; j++) dp[i][j] = -1;
	}
	
	cin >> N >> M;
	for(int i=0; i<N; i++){
		cin >> m[i];
		for(int j=0; j<M; j++){
			if(m[i][j] == 'R') {
				rabbit.first = i;
				rabbit.second = j;
			}
			if(m[i][j] == 'O'){
				out.push_back({i,j});
			}
		}
	}

	bfs();
	
	int maxv = -1;
	for(auto k : out){
		if(dp[k.first][k.second] != INF){
			maxv = max(maxv, dp[k.first][k.second]);
		}
	}
	cout << maxv;
	return 0;
}
