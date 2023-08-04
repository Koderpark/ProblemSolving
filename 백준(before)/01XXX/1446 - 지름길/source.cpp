#include <bits/stdc++.h>
#define x first
#define y second
#define MAX 998244353
using namespace std;

vector<pair<int,int>> path[12345];

int dp[12345];

int main(){
	for(int i=0; i<12345; i++) dp[i] = MAX;
	int N,D;
	int a,b,c;
	
	cin >> N >> D;
	for(int i=0; i<N; i++){
		cin >> a >> b >> c;
		path[a].push_back({b,c});
	}
	
	dp[0] = 0;
	for(int i=0; i<=D; i++){
		dp[i+1] = min(dp[i+1], dp[i]+1);
		
		for(auto k : path[i]){
			dp[k.x] = min(dp[k.x], dp[i]+k.y);
		}
	}
	
	cout << dp[D];
	return 0;
}
