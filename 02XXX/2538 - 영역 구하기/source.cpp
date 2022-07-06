#include <bits/stdc++.h>
using namespace std;

int arr[123][123] = {0};
int vis[123][123] = {0};
int n,m,k;

vector<int> ans;

int dx[] = {-1, 1, 0, 0};
int dy[] = { 0, 0,-1, 1};

int dfs(int x, int y){
	int ret=0;
	vis[x][y] = 1;
	
	if(x!=0)   if(!arr[x-1][y] && !vis[x-1][y]) ret += dfs(x-1,y);
	if(y!=0)   if(!arr[x][y-1] && !vis[x][y-1]) ret += dfs(x,y-1);
	if(x!=n-1) if(!arr[x+1][y] && !vis[x+1][y]) ret += dfs(x+1,y);
	if(y!=m-1) if(!arr[x][y+1] && !vis[x][y+1]) ret += dfs(x,y+1);
	
	return ret+1;
}

int main(){
	int sx,sy;
	int ex,ey;
	
	scanf("%d %d %d", &m, &n, &k);
	for(int i=0; i<k; i++){
		scanf("%d %d %d %d", &sx, &sy, &ex, &ey);
		for(int x=sx; x<ex; x++){
			for(int y=sy; y<ey; y++){
				arr[x][y] = 1;
			}
		}
	}
	
	//for(int i=0; i<n; i++, puts("")) for(int j=0; j<m; j++) printf("%3d", arr[i][j]);
	
	int cnt=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(!arr[i][j] && !vis[i][j]){
				//printf("[%d %d]", i,j);
				cnt++;
				//printf("[%d]\n", dfs(i,j));
				ans.push_back(dfs(i,j));
			}
		}
	}
	
	sort(ans.begin(), ans.end());
	printf("%d\n", cnt);
	for(int i=0; i<ans.size(); i++) printf("%d ", ans[i]);
	return 0;
}
