#include <bits/stdc++.h>
using namespace std;

queue<pair<int,int>> q;

int arr[345][345] = {0};
int vis[345][345] = {0};

int dx[] = { 1, 2, 2, 1,-1,-2,-2,-1};
int dy[] = { 2, 1,-1,-2,-2,-1, 1, 2};

int l;
int x,y;

bool safe(int mx, int my){
	if(mx <= 0) return 0;
	if(my <= 0) return 0;
	
	if(mx > l) return 0;
	if(my > l) return 0;
	
	return 1;
}

void bfs(){
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		for(int i=0; i<8; i++){
			int mx = x+dx[i];
			int my = y+dy[i];
			
			if(safe(mx,my) && !vis[mx][my]){
				q.push({mx,my});
				vis[mx][my] = 1;
				arr[mx][my] = arr[x][y] + 1;
			}
		}
	}
	
}

int main(){
	int t;
	scanf("%d", &t);
	
	while(t--){
		memset(arr, 0, sizeof(arr));
		memset(vis, 0, sizeof(vis));
		while(!q.empty()) q.pop();
		scanf("%d", &l);
		
		scanf("%d %d", &x, &y);
		q.push({x+1,y+1});
		vis[x+1][y+1] = 1;
		
		scanf("%d %d", &x, &y);
		bfs();
		
		//for(int i=1; i<=l; i++, puts("")) for(int j=1; j<=l; j++) printf("%3d", arr[i][j]);
		printf("%d\n", arr[x+1][y+1]);
	}
	return 0;
}
