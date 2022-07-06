#include <bits/stdc++.h>
#define FIR first
#define SEC second
using namespace std;


int dx[] = {-1, 0, 1, 0};
int dy[] = { 0,-1, 0, 1};

int n;
int shark=2;
int cnt;
int ans;
int arr[23][23] = {0};
int vis[23][23] = {0};

pair<int,int> pos;
queue<pair<pair<int,int>,int>> q;
vector<pair<int,pair<int,int>>> v;

void bfs(){
	while(1){
		if(shark == cnt){ cnt = 0; shark++; }
		
		while(!q.empty()) q.pop();
		memset(vis, 0, sizeof(vis));
		v.clear();
		vis[pos.FIR][pos.SEC] = 1;
		q.push({{pos.FIR,pos.SEC},0});
		
		while(!q.empty()){
			auto tmp = q.front();
			q.pop();
			
			for(int i=0; i<4; i++){
				int nx = tmp.FIR.FIR + dx[i];
				int ny = tmp.FIR.SEC + dy[i];
				
				if(1<=nx&&nx<=n && 1<=ny&&ny<=n){
					if(!vis[nx][ny] && arr[nx][ny] <= shark){
						vis[nx][ny] = 1;
						q.push({{nx,ny},tmp.SEC+1});
						if(arr[nx][ny] && arr[nx][ny] < shark){
							v.push_back({tmp.SEC+1,{nx,ny}});
						}
					}
				}
			}
		}
		if(v.empty()) break;
		sort(v.begin(), v.end());
		ans += v[0].FIR;
		pos = {v[0].SEC.FIR, v[0].SEC.SEC};
		//printf("[%d %d]\n", pos.FIR, pos.SEC);
		arr[pos.FIR][pos.SEC] = 0;
		cnt++;
	}
	return;
}

int main(){
	int tmp;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			scanf("%d", &tmp);
			if(tmp==9){ pos = {i,j}; vis[i][j] = 0; }
			else      { arr[i][j] = tmp; }
		}
	}
	
	bfs();
	printf("%d", ans);
	return 0;
}
