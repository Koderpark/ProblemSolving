#include <bits/stdc++.h>
#define INF 1234567890
using namespace std;
typedef long long int ll;

pair<ll,ll> arr[567];
ll dp[567][567] = {0};

int f(int s,int e){
	if(s==e)    return dp[s][e] = 0;
	if(dp[s][e] != INF) return dp[s][e];
	
	for(int i=s; i<e; i++){
		dp[s][e] = min(dp[s][e], (f(s,i) + f(i+1,e) + arr[s].first * arr[i+1].first * arr[e].second));
	}
	return dp[s][e];
}

int main(){
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	
	ll n;
	cin >> n;
		
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) dp[i][j] = INF;
	for(int i=1; i<=n; i++){
		cin >> arr[i].first >> arr[i].second;
	}
	
	cout << f(1,n) << "\n";
	return 0;
}
