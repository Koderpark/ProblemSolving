#include <bits/stdc++.h>
using namespace std;

int dp[2345][2345] = {0}; // i부터 j까지 수가 팰린드롬인가? T/F 
int arr[2345] = {0};

queue<pair<int,int>> q;

int main(){
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	for(int i=0; i<n; i++) cin >> arr[i];
	for(int i=0; i<2345; i++){
		dp[i][i] = 1;
		q.push({i,i});
	}
	for(int i=1; i<n; i++) if(arr[i-1] == arr[i]){
		dp[i-1][i] = 1;
		q.push({i-1,i});
	}
	
	while(!q.empty()){
		auto p = q.front(); q.pop();
		int s = p.first;
		int e = p.second;
		
		if(s>e) continue;
		
		if(0<=s-1 && e+1<n && arr[s-1] == arr[e+1]){
			dp[s-1][e+1] = 1;
			q.push({s-1,e+1});
		}
	}
	
	int m,s,e;
	cin >> m;
	for(int i=0; i<m; i++){
		cin >> s >> e;
		cout << dp[s-1][e-1] << "\n";
	}
	return 0;
}
