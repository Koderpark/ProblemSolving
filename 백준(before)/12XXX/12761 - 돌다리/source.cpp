#include <bits/stdc++.h>
using namespace std;

int dist[123456] = {0};
queue<int> q;

int A,B,N,M;

void bfs(int start){
	memset(dist, -1, sizeof(dist));
	q.push(start);
	dist[start] = 0;
	
	while(!q.empty()){
		int now = q.front(); q.pop();
		
		if(now*A <= 100000 && dist[now*A] == -1){
			q.push(now*A);
			dist[now*A] = dist[now]+1;
		}
		
		if(now*B <= 100000 && dist[now*B] == -1){
			q.push(now*B);
			dist[now*B] = dist[now]+1;
		}
		
		if(now+A <= 100000 && dist[now+A] == -1){
			q.push(now+A);
			dist[now+A] = dist[now]+1;
		}
		
		if(now+B <= 100000 && dist[now+B] == -1){
			q.push(now+B);
			dist[now+B] = dist[now]+1;
		}
		
		if(now+1 <= 100000 && dist[now+1] == -1){
			q.push(now+1);
			dist[now+1] = dist[now]+1;
		}
		
		if(now-1 >= 0 && dist[now-1] == -1){
			q.push(now-1);
			dist[now-1] = dist[now]+1;
		}
		
		if(now-A >= 0 && dist[now-A] == -1){
			q.push(now-A);
			dist[now-A] = dist[now]+1;
		}
		
		if(now-B >= 0 && dist[now-B] == -1){
			q.push(now-B);
			dist[now-B] = dist[now]+1;
		}
	}
	return;
}

int main(){
	cin >> A >> B >> N >> M;
	bfs(N);
	cout << dist[M];
	return 0;
}
