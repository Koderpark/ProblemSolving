#include <bits/stdc++.h>
#define INF 123456789
#define st first
#define nd second
using namespace std;

int arr[150][150] = {0};
int d[150][150] = {0};
priority_queue<pair<int,pair<int,int>>> pq;

int dx[] = {-1, 1, 0, 0};
int dy[] = { 0, 0,-1, 1};

int main(){
	int n;
	int cnt = 1;
	while(1){
		scanf("%d", &n);
		if(n==0) break;
		
		memset(arr, 0, sizeof(arr));
		for(int i=0; i<150; i++) for(int j=0; j<150; j++) d[i][j] = INF;
		for(int i=1; i<=n; i++)  for(int j=1; j<=n; j++)  scanf("%d", &arr[i][j]);
		
		d[1][1] = arr[1][1];
		pq.push({-arr[1][1],{1,1}});
		
		while(!pq.empty()){
			int x = pq.top().nd.st;
			int y = pq.top().nd.nd;
			int dir = -pq.top().st;
			pq.pop();
			
			for(int i=0; i<4; i++){
				int nx = x+dx[i];
				int ny = y+dy[i];
				int ndir = dir + arr[nx][ny];
				
				if(1<=nx && nx<=n && 1<=ny && ny<=n){
					if(d[nx][ny] > ndir){
						d[nx][ny] = ndir;
						pq.push({-ndir,{nx,ny}});
					}
				}
			}
		}
		
		printf("Problem %d: %d\n", cnt, d[n][n]);
		cnt++;
	}
	return 0;
}
