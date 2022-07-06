#include <bits/stdc++.h>
using namespace std;

int arr[1234] = {0};
int dp[1234] = {0};

int main(){
	memset(dp, -1, sizeof(dp));
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
	
	dp[1] = 0;
	for(int i=1; i<=n; i++){
		if(dp[i] == -1 && i != 1) continue;
		for(int j=1; j<=arr[i]; j++){
			if(dp[i+j] == -1) dp[i+j] = dp[i]+1;
		}
	}
	
	printf("%d", dp[n]);
	return 0;
}
