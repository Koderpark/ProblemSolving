#include <bits/stdc++.h>
using namespace std;

int arr[1234] = {0};
int  dp[1234] = {0};

int main(){
	int n;
	int ans = -1;
	
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			if(arr[i]>arr[j]) dp[i] = max(dp[i], dp[j]);
		}
		dp[i]++;
		ans = max(ans, dp[i]);
	}
	
	printf("%d\n", ans);
	return 0;
}
