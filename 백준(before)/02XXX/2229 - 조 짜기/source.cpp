#include <bits/stdc++.h>
using namespace std;

int arr[12345] = {0};
int dp[12345] = {0}; // dp[i] - i명까지 조를 짰을때 잘짜여진 정도의 최댓값. 

int cal(int s, int e){
	int mx=0,mn=998244353;
	for(int i=s; i<=e; i++){
		mx = max(mx, arr[i]);
		mn = min(mn, arr[i]);
	}
	return mx-mn;
}

int main(){
	int N;
	cin >> N;
	
	for(int i=1; i<=N; i++) cin >> arr[i];
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=i; j++){
			dp[i] = max(dp[i], dp[j-1] + cal(j,i));
		}
	}
	
	cout << dp[N];
	return 0;
}
