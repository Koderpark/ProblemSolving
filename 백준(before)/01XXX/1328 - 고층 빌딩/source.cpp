#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long int ll;

ll dp[123][123][123] = {0};
//dp i j k => i번째 큰 수까지를 배치했을때 왼쪽 j개, 오른쪽 k개인 경우의 수 

int main(){
	dp[1][1][1] = 1;
	
	int n,l,r;
	scanf("%d %d %d", &n, &l, &r);
	for(int i=2; i<=n; i++){
		for(int j=1; j<=l; j++){
			for(int k=1; k<=r; k++){
				dp[i][j][k] = dp[i-1][j-1][k] + dp[i-1][j][k-1] + dp[i-1][j][k] * (i-2);
				dp[i][j][k] %= MOD;
			}
		}
	}
	
	printf("%d", dp[n][l][r]);
}
