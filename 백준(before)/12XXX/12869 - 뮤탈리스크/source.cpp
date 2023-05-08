#include <bits/stdc++.h>
#define INF 1e9 + 7
using namespace std;

int dp[67][67][67] = {0};// i,j,k scv체력이 i,j,k일때의 최소공격횟수.

int chk(int x){
	if(x<0) return 0;
	else return x;
}

int dfs(int a,int b,int c){
	if(a==0 && b==0 && c==0) return 1;
	if(dp[chk(a-9)][chk(b-3)][chk(c-1)] == 0) dp[chk(a-9)][chk(b-3)][chk(c-1)] = dfs(chk(a-9), chk(b-3), chk(c-1)) + 1;
	if(dp[chk(a-9)][chk(b-1)][chk(c-3)] == 0) dp[chk(a-9)][chk(b-1)][chk(c-3)] = dfs(chk(a-9), chk(b-1), chk(c-3)) + 1;
	if(dp[chk(a-3)][chk(b-9)][chk(c-1)] == 0) dp[chk(a-3)][chk(b-9)][chk(c-1)] = dfs(chk(a-3), chk(b-9), chk(c-1)) + 1;
	if(dp[chk(a-3)][chk(b-1)][chk(c-9)] == 0) dp[chk(a-3)][chk(b-1)][chk(c-9)] = dfs(chk(a-3), chk(b-1), chk(c-9)) + 1;
	if(dp[chk(a-1)][chk(b-9)][chk(c-3)] == 0) dp[chk(a-1)][chk(b-9)][chk(c-3)] = dfs(chk(a-1), chk(b-9), chk(c-3)) + 1;
	if(dp[chk(a-1)][chk(b-3)][chk(c-9)] == 0) dp[chk(a-1)][chk(b-3)][chk(c-9)] = dfs(chk(a-1), chk(b-3), chk(c-9)) + 1;
	return 0;
}

int main(){
	int n;
	cin >> n;
	int a[3];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	dfs(a[0], a[1], a[2]);
	
	
	int maxv = 0;
	for(int i=0; i<67; i++) for(int j=0; j<67; j++) for(int k=0; k<67; k++){
		if(dp[i][j][k] != 0) printf("[%d %d %d] - %d \n", i,j,k, dp[i][j][k]);
		maxv = max(maxv, dp[i][j][k]);
	}
	cout << maxv;
	return 0;
}
