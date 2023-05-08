#include <stdio.h>
#include <algorithm>

using namespace std;
int arr[1234][1234];
int dp[1234][1234];

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	dp[0][0] = arr[0][0];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			dp[i+1][j] = max(dp[i+1][j], dp[i][j]+arr[i+1][j]);
			dp[i][j+1] = max(dp[i][j+1], dp[i][j]+arr[i][j+1]);
			dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j]+arr[i+1][j+1]);
		}
	}
	
	printf("%d", dp[n][m]);
	return 0;
}
