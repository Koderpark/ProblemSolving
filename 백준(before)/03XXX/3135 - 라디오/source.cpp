#include <bits/stdc++.h>
using namespace std;

queue<int> q;
int vis[1234] = {0};

int a,b;
int N;

void bfs(){
	while(!q.empty()){
		int now = q.front(); q.pop();
		
		if(now != 0 && vis[now-1] == 0){
			vis[now-1] = vis[now]+1;
			q.push(now-1);
		}
		if(now != 1000 && vis[now+1] == 0){
			vis[now+1] = vis[now]+1;
			q.push(now+1);
		}
	}
	return;
}

int main(){
	int k;
	
	cin >> a >> b;
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> k;
		q.push(k);
		vis[k] = 1;
	}
	if(a != 0){
		q.push(a-1);
		vis[a-1] = 1;
	}
	
	if(a != 1000){
		q.push(a+1);
		vis[a+1] = 1;
	}
	bfs();
	
	if(a == b){
		cout << 0;
		return 0;
	}
	
	cout << vis[b];
	return 0;
}
