#include <bits/stdc++.h>
#define INF 1234567890
using namespace std;

int dp[12345] = {0};
int arr[123] = {0};

int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	
	dp[0] = 0;
	for(int i=1; i<=k; i++){
		dp[i] = INF;
		for(int j=0; j<n; j++){
			if(i-arr[j] < 0) continue;
			dp[i] = min(dp[i], dp[i-arr[j]]+1);
		}
	}
	if(dp[k] == INF) printf("-1");
	else             printf("%d", dp[k]);
	return 0;
}
