#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

queue<pair<int,pair<int,int>>> q;
priority_queue<pair<int,pair<int,int>>> pq;
int arr[234][234] = {};

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	memset(arr, -1, sizeof(arr));
	
	int n,k,t,sx,sy,tmp;
	cin >> n >> k;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >> arr[i][j];
			if(arr[i][j] != 0){
				pq.push({-arr[i][j],{i,j}});
			}
		}
	}
	cin >> t >> sx >> sy;
	
	for(int T=1; T<=t; T++){
		while(!pq.empty()){
			q.push(pq.top());
			pq.pop();
		}
		while(!q.empty()){
			int num = -q.front().x;
			auto pos = q.front().y;
			q.pop();
		
			//printf("[%d %d %d] ", num, pos.x, pos.y);
		
			for(int i=0; i<4; i++){
				int nx = pos.x + dx[i];
				int ny = pos.y + dy[i];
			
				if(arr[nx][ny] == 0){
					arr[nx][ny] = num;
					//printf("{%d}", arr[nx][ny]);
					pq.push({-num,{nx,ny}});
				}
			}
			//puts("");
		}
		
		//for(int i=1; i<=n; i++,puts("")){for(int j=1; j<=n; j++){printf("%3d", arr[i][j]);}}
		//scanf("%d", &tmp);
	}
	
	
	cout << arr[sx][sy];
	return 0;
}
