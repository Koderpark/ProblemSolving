#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[123][123] = {0};

int nCr(int n, int r){
	if(!n) return 0;
	if(!r) return 1;
	if(n == r) return 1;
	
	if(dp[n][r] != 0) return dp[n][r];
	
	return dp[n][r] = nCr(n-1,r-1) + nCr(n-1,r);
}

int main(){
	int N;
	cin >> N;
	
	ll spot = nCr(N,4);
	
	cout << spot;
	return 0;
}
