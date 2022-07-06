#include <bits/stdc++.h>
#define MOD 998244353
using namespace std;
typedef long long int ll;

int A[12345] = {0};
ll dp[12345] = {0}; 

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=0; i<12345; i++) dp[i] = 1;
	
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> A[i];
	}
	
	for(int i=1; i<N; i++){
		for(int j=0; j<i; j++){
			if(A[j] < A[i]){
				dp[i] += dp[j];
				dp[i] %= MOD;
			}
		}
	}
	
	for(int i=0; i<N; i++){
		cout << dp[i] << " ";
	}
	return 0;
}

/*
N^2가 되네욤 ㄴㅇㅅ
dp[i] : Ai로 끝나는 증가하는부분수열의 개수
dp[i] = 1로 초기화 
dp[i] = for(int j=0; j<i; j++)에 대해서
if(Aj < Ai){
	dp[i] += dp[j]
} 
*/
