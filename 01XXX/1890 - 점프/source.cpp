#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n;
int arr[123][123] = {0};
ll  dp[123][123] = {0};


void find(){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(dp[i][j] && arr[i][j]){
				dp[i+arr[i][j]][j] += dp[i][j];
				dp[i][j+arr[i][j]] += dp[i][j];
			}
		}
	}
	return;
}

int main(){
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	dp[1][1] = 1;
	find();
	
	printf("%lld", dp[n][n]);
	return 0;
}

