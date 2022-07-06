#include <bits/stdc++.h>
using namespace std;

struct st{
	int x;
	int y;
	int dir; // 0 - 가로, 1 - 세로, 2 - 대각선 
};

queue<st> q;
int ans = 0;
int arr[23][23] = {0};
int n;

void bfs(){
	while(!q.empty()){
		int x = q.front().x;
		int y = q.front().y;
		int dir = q.front().dir;
		q.pop();
		
		if(x==n && y==n) ans++;
		if(x>n || y>n) continue;
		
		if(dir==0 || dir==2){ if(arr[x+1][y] == 0) q.push({x+1,y,0}); }
		if(dir==1 || dir==2){ if(arr[x][y+1] == 0) q.push({x,y+1,1}); }
		if(!arr[x][y+1] && !arr[x+1][y] && !arr[x+1][y+1]) q.push({x+1,y+1,2});
	}
}

int main(){
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			scanf("%d", &arr[j][i]);
		}
	}
	
	q.push({2,1,0});
	bfs();
	printf("%d", ans);
	return 0;
}
