#include <stdio.h>

int dp[101][11] = {0};
int index(int k){ if(k==-1){return 10;} return k; }

int main(){
	int n,sum=0;
	scanf("%d", &n);
	for(int i=1; i<10; i++) dp[0][i] = 1;
	for(int i=0; i<n; i++){
		for(int j=0; j<10; j++){
			dp[i+1][index(j+1)] = ( dp[i+1][index(j+1)] + dp[i][j] ) % 1000000000;
			dp[i+1][index(j-1)] = ( dp[i+1][index(j-1)] + dp[i][j] ) % 1000000000;
		}
	}
	for(int i=0; i<10; i++) sum = (sum+dp[n-1][i])%1000000000;
	printf("%d", sum);
	return 0;
}
