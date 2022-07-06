#include <bits/stdc++.h>
using namespace std;

vector<int> w;
vector<int> v;

int dp[2345][12345] = {0};

int main(){
	int n,m;
	int a,b,c;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%d %d %d", &a, &b, &c);
		for(int j=0; c>0; j++){
			int tmp = min(1<<j, c);
			w.push_back(a*tmp);
			v.push_back(b*tmp);
			c-=tmp;
		}
	}
	
	for(int i=1; i<=w.size(); i++){
		for(int j=1; j<=m; j++){
			if(j>=w[i-1]) dp[i][j] = max(dp[i-1][j-w[i-1]] + v[i-1] , dp[i-1][j]);
			else          dp[i][j] = dp[i-1][j];
		}
	}
	
	printf("%d", dp[w.size()][m]);
	return 0;
}
