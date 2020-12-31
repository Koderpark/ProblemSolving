#include <stdio.h>
#include <queue>
#include <utility>

using namespace std;

queue<pair<int,int>> q;

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int n,m;
int arr[123][123] = {0};
int visit[123][123] = {0};
char tmp[123];

bool chk(int x, int y){
	if(x==0 || x==n+1 || y==0 || y==m+1) return 0;
	return 1;
}

void bfs(){
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		visit[x][y] = 1;
		q.pop();
		
		for(int i=0; i<4; i++){
			int x1 = x + dx[i];
			int y1 = y + dy[i];
			if(chk(x1,y1) && arr[x1][y1] == 1 && !visit[x1][y1]){
				q.push({x1,y1});
				arr[x1][y1] = arr[x][y] + 1;
				visit[x1][y1] = 1;
			}
		}
	}
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++){
		scanf("%s", &tmp);
		for(int j=0; j<m; j++){
			arr[i][j+1] = tmp[j] - '0';
		}
	}
	
	q.push({1,1});
	bfs();
	printf("%d", arr[n][m]);
	return 0;
}
