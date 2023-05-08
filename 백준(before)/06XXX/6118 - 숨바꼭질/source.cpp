#include <bits/stdc++.h>
using namespace std;

queue<int> q;
vector<int> g[23456];
int dis[23456] = {0};


int main(){
	memset(dis, -1,sizeof(dis));
	int N,M;
	int a,b;
	
	cin >> N >> M;
	for(int i=0; i<M; i++){
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	dis[1] = 0;
	q.push(1);
	
	while(!q.empty()){
		int now = q.front(); q.pop();
		
		for(auto nxt : g[now]){
			if(dis[nxt] == -1){
				dis[nxt] = 1 + dis[now];
				q.push(nxt);
			}
		}
	}
	
	int ptr = 0;
	int val = -1;
	int cnt = 0;
	for(int i=1; i<=N; i++){
		if(val < dis[i]){
			val = dis[i];
			ptr = i;
		}
	}
	
	for(int i=1; i<=N; i++){
		if(dis[i] == val){
			cnt++;
		}
	}
	
	cout << ptr << " " << val << " " << cnt << "\n";
	return 0;
}
