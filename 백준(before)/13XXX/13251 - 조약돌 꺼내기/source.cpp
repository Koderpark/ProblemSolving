#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[100][100] = {0};
vector<int> v;

ll nCr(ll n, ll r){
	if(n<r) return 0;
	if(dp[n][r] != 0) return dp[n][r];
	if(n==r || r==0) return 1;
	return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}


int main(){
	cout << fixed;
	cout.precision(14);
	ll N=0,M,k,K,S=0;
	
	cin >> M;
	for(int i=0; i<M; i++){
		cin >> k;
		v.push_back(k);
		N += k;
	}
	cin >> K;
	
	for(auto k:v) S += nCr(k,K);
	cout << (double)S/nCr(N,K);
}
