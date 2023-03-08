#include <bits/stdc++.h>
using namespace std;

//dp[i] - str [0,i) 범위에서 가장 많이 붙여넣은 경우의 문자열 길이.
//dp[i] 이고 문자열 str.length() = K 에서
//dp[i] = max(dp[i], dp[i-K] + K)
 
int dp[100001] = {0};
string B[501];
string A;

bool chk[100001][501] = {0};

int fail[10001] = {0};

bool cmp(string &a, string &b){
	if(a.length() != b.length()) return a.length() < b.length();
	return a < b;
}

void make_fail(string B){
	memset(fail, 0, sizeof(fail));
	int M = B.length();
	for(int i=1,j=0; i<M; i++){
		while(j && B[i] != B[j]) j = fail[j-1];
		if(B[i] == B[j]) fail[i] = ++j;
	}
	return;
}

void kmp(int Bidx){
	make_fail(B[Bidx]);
	
	for(int i=0,j=0; i<A.length(); i++){
		while(j && A[i] != B[Bidx][j]) j = fail[j-1];
		if(A[i] == B[Bidx][j]){
			if(j == B[Bidx].length()-1){
				chk[i][Bidx] = true;
				j = fail[j];
			}
			else j++;
		}
	}
	return;
}

int main(){
	int N;
	
	cin >> A >> N;
	for(int i=0; i<N; i++) cin >> B[i];
	for(int i=0; i<N; i++) kmp(i);
	
	for(int i=0; i<A.length(); i++){
		
		if(i) dp[i] = dp[i-1];
		
		for(int j=0; j<N; j++){
			if(chk[i][j]){
				if(i) dp[i] = max(dp[i], dp[i-B[j].length()] + (int)B[j].length());
				else dp[i] = 1;
			}
		}
	}

	cout << dp[A.length()-1];
	return 0;
}
