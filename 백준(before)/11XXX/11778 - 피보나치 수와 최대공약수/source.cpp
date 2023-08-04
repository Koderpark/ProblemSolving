#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;

ll dp[3] = {0};

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

void mul(ll m1[2][2], ll m2[2][2]){
	ll a = m1[0][0]*m2[0][0] + m1[0][1]*m2[1][0];
	ll b = m1[0][0]*m2[0][1] + m1[0][1]*m2[1][1];
	ll c = m1[1][0]*m2[0][0] + m1[1][1]*m2[1][0];
	ll d = m1[1][0]*m2[0][1] + m1[1][1]*m2[1][1];
	
	m1[0][0] = a % MOD;
	m1[0][1] = b % MOD;
	m1[1][0] = c % MOD;
	m1[1][1] = d % MOD;
	return;
}

void power(ll mat[2][2], ll K){
	if(!K || K==1) return;
	
	ll mat2[2][2] = {{1,1},{1,0}};
	
	power(mat, K/2);
	mul(mat, mat);
	
	if(K%2) mul(mat, mat2);
	return;
}

ll fibo(ll K){
	if(!K) return 0;
	
	ll mat[2][2] = {{1,1},{1,0}};
	power(mat, K-1);
	return mat[0][0];
}

int main(){
	ll N, M;
	cin >> N >> M;
	
	ll K = gcd(N,M);	
	cout << fibo(K);
	return 0;
}
