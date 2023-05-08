#include <bits/stdc++.h>
using namespace std;

int dp[12345] = {0};
int arr[1234] = {0};

int main(){
	int N;
	cin >> N;
	
	for(int i=1; i<=N; i++){
		cin >> arr[i];
	}
	
	for(int i=1; i<=N; i++) dp[i] = arr[i];
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			dp[i+j] = min(dp[i+j], dp[i]+arr[j]);
		}
		//printf("[%d] ", dp[i]);
	}
	
	cout << dp[N];
	return 0;
}
