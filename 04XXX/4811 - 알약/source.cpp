#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long int ll;

ll dp[33][33] = {0};

ll f(ll a, ll b){ // a - 전체 b - 반개 
	if(a == 0) return 1;
	if(dp[a][b] != -1) return dp[a][b];
	
	dp[a][b] = f(a-1,b+1);
	if(b>0) dp[a][b] += f(a,b-1);
	
	return dp[a][b];
}

int main(){
	int n;
	while(1){
		scanf("%d", &n);
		
		if(n == 0) break;
		
		memset(dp, -1, sizeof(dp));
		printf("%lld\n", f(n,0));
	}
}
