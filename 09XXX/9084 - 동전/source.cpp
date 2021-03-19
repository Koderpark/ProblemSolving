#include <bits/stdc++.h>
using namespace std;

int arr[23] = {0};
int dp[12345] = {0};

int main(){
	int t,n,m;
	scanf("%d", &t);
	while(t--){
		memset(dp, 0, sizeof(dp));
		
		scanf("%d", &n);
		for(int i=0; i<n; i++) scanf("%d", &arr[i]);
		scanf("%d", &m);
		
		dp[0] = 1;
		for(int i=0; i<n; i++){
			for(int j=1; j<=m; j++){
				if(j-arr[i] >= 0) dp[j] += dp[j-arr[i]];
			}
		}
		printf("%d\n", dp[m]);
	}
	return 0;
}
