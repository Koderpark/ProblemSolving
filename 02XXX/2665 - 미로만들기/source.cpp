#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

int dx[] = { 0, 0, 1,-1};
int dy[] = { 1,-1, 0, 0};

int d[123][123] = {0};
int g[123][123] = {0};

priority_queue<pair<int,pair<int,int>>> pq;

int main(){
	for(int i=0; i<123; i++) for(int j=0; j<123; j++) d[i][j] = INF;
	int n;
	string s;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		cin >> s;	
		for(int j=0; j<n; j++){
			g[i][j+1] = !(s[j]-'0');
		}
	}
	
	//puts("-------------------");
	//for(int i=1; i<=n; i++,puts(""))for(int j=1; j<=n; j++)printf("%d", g[i][j]);
	//puts("-------------------");
	
	d[1][1] = 0;
	pq.push({0,{1,1}});
	
	while(!pq.empty()){
		auto pos = pq.top().second;
		int x = pos.first;
		int y = pos.second;
		int dis = -pq.top().first;
		pq.pop();
		
		if(d[x][y] < dis) continue;
		
		for(int i=0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			int ndis = g[x][y] + dis;
			
			if(nx>n || ny>n || nx<1 || ny<1) continue;
			
			if(d[nx][ny] > ndis){
				d[nx][ny] = ndis;
				pq.push({-ndis,{nx,ny}});
			}
		}
	}
	
	printf("%d", d[n][n]);
	return 0;
}

