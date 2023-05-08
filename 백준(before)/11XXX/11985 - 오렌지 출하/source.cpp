#include <bits/stdc++.h>
#define INF 1e18 
using namespace std;
typedef long long int ll;

ll a[23456] = {0};
ll dp[23456] = {0};

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=0; i<23456; i++) dp[i] = INF;
	dp[0] = 0;
	
	int N,M,K;
	cin >> N >> M >> K;
	for(int i=0; i<N; i++){ cin >> a[i];}
	
	for(int i=1; i<=N; i++){
		ll minv = INF;
		ll maxv = 0;
		
		for(int j=1; j<=M; j++){
			if(i<j) break;
			minv = min(minv, a[i-j]);
			maxv = max(maxv, a[i-j]);
			dp[i]= min(dp[i], dp[i-j]+K+(ll)(maxv-minv)*j);
		}
	}
	cout << dp[N];
	return 0;
}
/*
dp[i] = i번까지 포장했을때 최소값 
dp[i] = dp[i-(1~M)] + K + (1~M)*(maxv-minv)
*/
