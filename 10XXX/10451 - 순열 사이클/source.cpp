#include <bits/stdc++.h>
using namespace std;

int arr[1234] = {0};
int vis[1234] = {0};
void dfs(int node){
	if(vis[node]) return;
	vis[node] = 1;
	
	dfs(arr[node]);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		int ans = 0;
		scanf("%d", &n);
		memset(arr, 0, sizeof(arr));
		memset(vis, 0, sizeof(vis));
		for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
		
		for(int i=1; i<=n; i++){
			if(vis[i] == 0){
				ans++;
				dfs(i);
			}
		}
		
		printf("%d\n", ans);
	}
	return 0;
}
