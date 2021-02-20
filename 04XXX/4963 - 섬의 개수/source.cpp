#include <bits/stdc++.h>
using namespace std;

int arr[56][56] = {0};
int vis[56][56] = {0};

int dx[] = { 0, 0, 1, 1, 1,-1,-1,-1 };
int dy[] = { 1,-1, 1, 0,-1, 1, 0,-1 };

void find(int x, int y){
	if(vis[x][y]) return;
	vis[x][y] = 1;
	arr[x][y] = 0;
	
	for(int i=0; i<8; i++){
		int mx = x+dx[i];
		int my = y+dy[i];
		if(arr[mx][my]) find(mx,my);
	}
}

int main(){
	int w,h;
	int ans;
	while(1){
		ans = 0;
		memset(arr, 0, sizeof(arr));
		memset(vis, 0, sizeof(vis));
		scanf("%d %d", &w, &h);
		if(!w && !h) break;
		 
		for(int i=1; i<=h; i++){
			for(int j=1; j<=w; j++){
				scanf("%d", &arr[i][j]);
			}
		}
		
		for(int i=1; i<=h; i++){
			for(int j=1; j<=w; j++){
				if(arr[i][j]){
					find(i,j);
					ans++;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
