#include <stdio.h>

int arr[1234] = {0};
int dp[1234] = {0};

int MAX(int a, int b){return a>b?a:b;}

int main(){
	int n,v,ans=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &arr[i]);
	
	dp[0] = 1;
	
	for(int i=1; i<n; i++){
		v = 0;
		for(int j=0; j<i; j++){
			if(arr[i]>arr[j]){
				v = MAX(v, dp[j]);
			}
		}
		dp[i] = v+1;
	}
	
	for(int i=0; i<n; i++) ans = MAX(ans, dp[i]);
	printf("%d", ans);
	return 0;
}
