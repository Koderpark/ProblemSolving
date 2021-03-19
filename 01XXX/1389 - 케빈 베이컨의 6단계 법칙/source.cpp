#include <bits/stdc++.h>
using namespace std;

int arr[123] = {0};
int vis[123] = {0};

queue<int> q;
vector<int> v[123];
vector<pair<int,int>> ans;

void bfs(){
	while(!q.empty()){
		int k = q.front();
		q.pop();
		for(int i=0; i<v[k].size(); i++){
			if(!vis[v[k][i]]){
				vis[v[k][i]] = 1;
				arr[v[k][i]] = arr[k]+1;
				q.push(v[k][i]);
			}
		}
	}
}

int main(){
	int n,m;
	int a,b;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for(int i=1; i<=n; i++){
		memset(vis, 0, sizeof(vis));
		memset(arr, 0, sizeof(arr));
		
		vis[i] = 1;
		arr[i] = 0;
		q.push(i);
		bfs();
		
		int sum = 0;
		for(int j=1; j<=n; j++) sum += arr[j];
		ans.push_back({sum,i});
	}
	sort(ans.begin(), ans.end());
	printf("%d", ans[0].second);
	return 0;
}
