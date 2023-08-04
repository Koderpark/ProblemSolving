#include <bits/stdc++.h>
using namespace std;

vector<int> g[1000000];
bool vis[1234567] = {0};
bool light[1234567] = {0};

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int N,M;

int bfs(){
	queue<int> q;
	q.push(1001);
	vis[1001] = true;
	light[1001] = true;
	
	while(!q.empty()){
		int now = q.front();
		q.pop();
		
		for(int nxt : g[now]){
			if(!light[nxt]){
				light[nxt] = true;
				
				for(int i=0; i<4; i++){
					int nnxt = nxt + 1000*dx[i] + dy[i];
					
					int x = nxt/1000;
					int y = nxt%1000;
					if(x==0 || x==N+1 || y==0 || y==N+1) continue;
					
					if(vis[nnxt]) q.push(nnxt);
				}
			}
		}
		
		for(int i=0; i<4; i++){
			int nxt = now + 1000*dx[i] + dy[i];
			
			int x = nxt/1000;
			int y = nxt%1000;
			if(x==0 || x==N+1 || y==0 || y==N+1) continue;
			
			if(light[nxt] && !vis[nxt]){
				q.push(nxt);
				vis[nxt] = 1;
			}
		}
	}
	
	int ans = 0;
	for(int i=0; i<1234567; i++) ans += light[i];
	return ans;
}

int main(){
	int a,b,c,d;
	cin >> N >> M;
	for(int i=0; i<M; i++){
		cin >> a >> b >> c >> d;
		g[a*1000+b].push_back(c*1000+d);
	}
	
	cout << bfs();
	return 0;
}
