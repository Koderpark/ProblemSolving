#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int fail[567890];

int main(){
	string S;
	int K;
	
	cin >> S >> K;
	
	int N = S.length();
	
	for(int i=1,j=0; i<N; i++){
		while(j>0 && S[i] != S[j]) j = fail[j-1];
		if(S[i] == S[j]) fail[i] = ++j; 
	}
	
	cout << (ll)N*K - (ll)fail[N-1]*(K-1);
	return 0;
}
