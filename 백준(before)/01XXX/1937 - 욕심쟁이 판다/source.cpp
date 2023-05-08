#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = { 0, 0,-1, 1};

int arr[567][567] = {0};
int dp[567][567] = {0};
int n;

int f(int x, int y){
	if(dp[x][y] != 0) return dp[x][y];
	dp[x][y] = 1;
	for(int i=0; i<4; i++){
		int nx = x+dx[i];
		int ny = y+dy[i];
		
		if(0>nx || 0>ny || nx>=n || ny>=n) continue;
		
		if(arr[nx][ny] > arr[x][y]){
			dp[x][y] = max(f(nx,ny)+1, dp[x][y]);
		}
	}
	return dp[x][y];
}

int main(){
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
		}
	}
	
	int ans = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			ans = max(ans, f(i,j));
		}
	}
	cout << ans;
	return 0;
}
