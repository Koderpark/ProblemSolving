#include <stdio.h>
#include <algorithm>

using namespace std;
int arr[1234] = {0};
int dp[1234] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){ scanf("%d", &arr[i]); }
	for(int i=0; i<1234; i++) dp[i] = 1;
	
	for(int i=n-2; i>=0; i--){
		int tmp = 1;
		for(int j=n-1; j>i; j--){ if(arr[i] > arr[j]) tmp = max(tmp, dp[j]+1); }
		dp[i] = tmp;
	}
	
	int ans = 0;
	for(int i=0; i<n; i++){ ans = max(ans, dp[i]); }
	printf("%d", ans);
	return 0;
}
