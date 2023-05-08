#include <bits/stdc++.h>
#define INF 1234567890
using namespace std;

int arr[56][56] = {0};
int prefix[56][56] = {0};
int dp[56][56][56][56] = {0};

int dfs(int sx, int ex, int sy, int ey){
	if(sx==ex && sy==ey) return 0;
	if(dp[sx][ex][sy][ey] != -1) return dp[sx][ex][sy][ey];
	dp[sx][ex][sy][ey] = INF;
	
	int grape = prefix[ex][ey] -
	            prefix[sx-1][ey] - 
				prefix[ex][sy-1] + 
				prefix[sx-1][sy-1];
				
	//printf("[%d]", grape);
	
	int tmp1, tmp2;
	
	for(int i=sx; i<ex; i++){
		tmp1 = dfs(sx,i,sy,ey);
		tmp2 = dfs(i+1,ex,sy,ey);
		//printf("[%d %d]", tmp1, tmp2);
		
		dp[sx][ex][sy][ey] = min(
			dp[sx][ex][sy][ey],
			tmp1 + tmp2 + grape
		);
	}
	for(int i=sy; i<ey; i++){
		tmp1 = dfs(sx,ex,sy,i);
		tmp2 = dfs(sx,ex,i+1,ey);
		//printf("[%d %d]", tmp1, tmp2);
		
		dp[sx][ex][sy][ey] = min(
			dp[sx][ex][sy][ey],
			tmp1 + tmp2 + grape
		);
	}
	return dp[sx][ex][sy][ey];
}

int main(){
	memset(dp, -1, sizeof(dp));
	int n,m;
	
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) scanf("%d", &arr[i][j]);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			prefix[i][j] = prefix[i-1][j] + 
			               prefix[i][j-1] -
						   prefix[i-1][j-1] + 
						   arr[i][j];
		}
	}
	
	//for(int i=1; i<=n; i++,puts("")) for(int j=1; j<=m; j++){ printf("%5d", prefix[i][j]); }
	printf("%d", dfs(1,n,1,m));
	return 0;
}
