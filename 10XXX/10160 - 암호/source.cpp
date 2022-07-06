#include <bits/stdc++.h>
#define MOD 1000000009
using namespace std;
typedef long long int ll;

ll dp[27][1000001] = {0};
ll sum1 = 0;
ll sum2 = 0;
ll sum3 = 0;
ll sum4 = 0;
ll sum5 = 0;
ll tmp = 0;

int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	for(int i=1; i<=k; i++){
		dp[i][1] = 1;
	}
	sum1 = 1;
	
	for(int i=1; i<=n; i++){
		printf("[%d %d %d %d %d]\n", sum1, sum2, sum3, sum4, sum5);
		
		tmp = 0;
		for(int j=1; j<=k; j++){
			if(i>=5 && j==3){
				dp[j][i] = (
					sum5 * (
						(sum1 - dp[2][i-1]) + // 바로전 B가 안나온케이스 
						
						(sum4 - dp[1][i-4]) + // 2 
						(sum3 - dp[2][i-3]) + // 6 
						(sum2 - dp[1][i-2] - dp[3][i-2]) + // 9
						
					)
				) % MOD;
			}else{
				dp[j][i] = sum1 % MOD;
			}
			printf("{%d}", dp[j][i]); 
			tmp += dp[j][i];
		}
		puts("\n");
		sum5 = sum4;
		sum4 = sum3;
		sum3 = sum2;
		sum2 = sum1;
		sum1 = tmp;
	}
	
	ll ans = 0;
	for(int i=1; i<=k; i++) ans += dp[i][n];
	printf("%lld", ans%MOD);
}
