#include <stdio.h>

int dp[1001][3] = {0};
int min(int a, int b){ return a>b?b:a; }
int index(int k){ if(k==3){return 0;} if(k==-1){return 2;} return k; }
int main(){
	int n,tmp,value=1234567;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++) for(int j=0; j<3; j++) scanf("%d", &dp[i][j]);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<3; j++){
			dp[i+1][j] += min(dp[i][index(j+1)], dp[i][index(j-1)]);
		}
	}
	
	for(int i=0; i<3; i++) value = min(value, dp[n][i]);
	printf("%d", value);
	return 0;
}
