#include <bits/stdc++.h>
using namespace std;

int dp[1234][1234] = {0};

int main(){
	for(int i=0; i<1234; i++){
		dp[0][i] = i;
		dp[i][0] = i;
	}
	
	string A,B;
	cin >> A >> B;
	
	for(int i=1; i<=A.length(); i++){
		for(int j=1; j<=B.length(); j++){
			if(A[i-1] == B[j-1]) dp[i][j] = dp[i-1][j-1];
			else dp[i][j] = min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]}) +1;
		}
	}
	
	cout << dp[A.length()][B.length()];
	return 0;
}
