#include <stdio.h>
#include <string.h>
#include <math.h>

#define MOD 1000000007

typedef long long int ll;

int parent[5432] = {0};
int chk[5432] = {0};

ll dp[5432][5432] = {0};
ll S[5432] = {0};

int find(int x){
	if(x==parent[x]) return x;
	else{
    	int y = find(parent[x]);
    	return parent[x] = y;
  	}
}

void unionf(int x,int y){
	x = find(x);
	y = find(y);
	if(x!=y) parent[y] = x;
}

int main(){
	/* 傈贸府 矫累 */ 
	ll tmp = 0;
	for(int i=0; i<=5000; i++){ dp[i][1] = 1; dp[i][i] = 1; }
	for(int i=1; i<=5000; i++){
		for(int j=1; j<=5000; j++){
			if(dp[i-1][j-1] != 0 && dp[i-1][j] != 0){
				dp[i][j] = (dp[i-1][j-1] + j*dp[i-1][j]) % MOD; 
			}
		}
	}
	for(int i=0; i<=5000; i++){
		tmp = 0;
		for(int j=0; j<=5000; j++) { tmp += dp[i][j]; tmp %= MOD;}
		S[i] = tmp;
	}
	S[0] = S[1] = 1;
	/* 傈贸府 场 */ 
	
	int n,m;
	int u,v;
	scanf("%d %d", &n, &m);
	for(int i=0; i<=n; i++) parent[i] = i;
	for(int i=0; i<m;  i++){
		memset(chk,0,sizeof(chk));
		tmp = 0;
		
		scanf("%d %d", &u, &v);
		
		unionf(u,v);
		for(int i=1; i<=n; i++){ chk[find(i)] = 1; }
		for(int i=1; i<=n; i++){ tmp += chk[i]; }
		printf("%lld\n", S[tmp]);
	}
	return 0;
}
