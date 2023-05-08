#include <bits/stdc++.h>
using namespace std;

int vis[123] = {0};
queue<int> q;
vector<int> v[123];
pair<int,int> arr[123];

int dist(pair<int,int> a, pair<int,int> b){
	return abs(a.first-b.first) + abs(a.second-b.second);
}

void bfs(){
	while(!q.empty()){
		int k = q.front();
		q.pop();
		for(int i=0; i<v[k].size(); i++){
			if(!vis[v[k][i]]){
				vis[v[k][i]] = 1;
				q.push(v[k][i]);
			}
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		memset(v, 0, sizeof(v));
		memset(arr, 0, sizeof(arr));
		memset(vis, 0, sizeof(vis));
		
		int n,a,b;
		scanf("%d", &n);
		for(int i=0; i<n+2; i++) scanf("%d %d", &arr[i].first, &arr[i].second);
		
		for(int i=0; i<n+2; i++){
			for(int j=0; j<i; j++){
				if(dist(arr[i], arr[j]) <= 1000){
					v[i].push_back(j);
					v[j].push_back(i);
				}
			}
		}
		
		q.push(0);
		vis[0] = 1;
		bfs();
		if(vis[n+1]) puts("happy");
		else         puts("sad");
	}
	return 0;
}
