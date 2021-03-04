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
		
		dp[0] = 1;
		for(int i=1; i<=3; i++){
			for(int j=1; j<=n; j++){
				if(j-i >= 0) dp[j] += dp[j-i];
			}
		}
		printf("%d\n", dp[n]);
	}
	return 0;
}
