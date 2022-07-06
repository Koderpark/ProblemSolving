#include <bits/stdc++.h>
#define INF 123456789
using namespace std;

int arr[567] = {0};
int dp[567][567] = {0};
int prefix[567] = {0};

int f(int s,int e){
	if(s==e || s>=e)    return dp[s][e] = 0;
	if(s+1==e)          return dp[s][e] = arr[s]+arr[e];
	if(dp[s][e] != INF) return dp[s][e];
	
	for(int i=s; i<e; i++){
		dp[s][e] = min(dp[s][e], f(s,i) + f(i+1,e) + prefix[e] - prefix[s-1]);
	}
	return dp[s][e];
}

int main(){
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		memset(arr, 0, sizeof(arr));
		int n;
		cin >> n;
		
		for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) dp[i][j] = INF;
		for(int i=1; i<=n; i++){
			cin >> arr[i];
			prefix[i] = arr[i]+prefix[i-1];
		}
		
		cout << f(1,n) << "\n";
	}
	return 0;
}
