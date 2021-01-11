#include <stdio.h>

#define MOD 1000000

typedef long long int ll;

ll dp1[123][123] = {0}; // i번째 사람의 번호가 j일때 +       j-2 > j-1 < j임 
ll dp2[123][123] = {0}; // i번째 사람의 번호가 j일때 + j-2 < j-1 > j임 

int n;

void fill(){
	for(int i=2; i<=n; i++){
		for(int j=1; j<=n; j++){
			ll tmp = 0;
			for(int k=1; k<=j-1; k++) tmp += dp2[i-1][k];
			dp1[i][j] += tmp;
			dp1[i][j] %= MOD;
			
			tmp = 0;
			for(int k=j+1; k<=n; k++) tmp += dp1[i-1][k];
			dp2[i][j] += tmp;
			dp2[i][j] %= MOD;
		}
	}
}

int main(){
	int ans = 0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){ dp1[1][i] = 1; dp2[1][i] = 1;}
	fill();
	
	for(int i=0; i<123; i++){
		ans += dp1[n][i];
		ans += dp2[n][i];
		ans %= MOD;
	}
	
	printf("%d", ans);
	return 0;
} 
