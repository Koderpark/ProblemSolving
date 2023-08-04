#include <bits/stdc++.h>
using namespace std;

int arr[345][345] = {0};
int dp[345][345] = {0};

int main(){
	int N,M;
	cin >> N >> M;
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			cin >> arr[i][j];
			dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + arr[i][j];
		}
	}
	
	cout << dp[N][M];
	return 0;
}
