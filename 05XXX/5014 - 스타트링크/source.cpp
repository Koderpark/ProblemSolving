#include <bits/stdc++.h>
using namespace std;

queue<pair<int,int>> q;
int vis[1234567];
int f,s,g,u,d;

void bfs(int node){
	q.push({0,node});
	while(!q.empty()){
		int now = q.front().second;
		int dis = q.front().first;
		q.pop();
		
		if(vis[now] != -1) continue;
		vis[now] = dis;
		
		if(now-d >= 1){ q.push({dis+1, now-d}); }
		if(now+u <= f){ q.push({dis+1, now+u}); }
	}
}

int main(){
	memset(vis, -1, sizeof(vis));
	scanf("%d %d %d %d %d", &f, &s, &g, &u, &d);
	
	bfs(s);
	if(vis[g] != -1) printf("%d", vis[g]);
	else puts("use the stairs");
	return 0;
}
