#include <stdio.h>
#include <queue>
#include <utility>

using namespace std;

int n,m;
int x,y;
int res;
int arr[1234][1234] = {0};
queue<pair<int,int>> point;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int max(int a, int b){return a>b?a:b;}

bool chk(int x, int y){
	if(0==x || x==n+1 || y==0 || y==m+1) return false;
	return true;
}

void bfs(){
	while(!point.empty()){
		x = point.front().first;
		y = point.front().second;

		for(int i=0; i<4; i++){
			if(chk(x+dx[i],y+dy[i]) && arr[x+dx[i]][y+dy[i]] == 0){
				point.push({x+dx[i],y+dy[i]});
				arr[x+dx[i]][y+dy[i]] = arr[x][y] + 1;
			}
		}
		point.pop();
	}
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1; i<=m; i++) for(int j=1; j<=n; j++){
		scanf("%d", &arr[j][i]);
		if(arr[j][i] == 1) point.push({j,i});
	}
	
	bfs();
	
	for(int i=1; i<=n; i++) for(int j=1; j<=m; j++){
		if(arr[i][j] == 0){ printf("-1"); return 0; }
		res = max(res, arr[i][j]);
	}
	printf("%d", res-1);
	return 0;
}
