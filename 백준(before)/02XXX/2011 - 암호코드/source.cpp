#include <bits/stdc++.h>
#define MOD 1000000
using namespace std;

string s;
int dp[5678] = {0};
// dp[i] -> i번째까지의 문자열로 만들수 있는 서로다른 암호의 개수. 

int main(){
	cin >> s;
	if(s[0] == '0'){
		cout << 0;
		return 0;
	}
	
	dp[0] = 1;
	dp[1] = 1;
	
	for(int i=2; i<=s.length(); i++){
		//printf("[%c%c] ", s[i-2], s[i-1]);
		
		if(s[i-1] == '0' && s[i-2] > '2'){
			cout << 0;
			return 0;
		}
		
		if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<='6')){
			dp[i] += dp[i-2];
		}
		
		if(s[i-1] != '0'){
			dp[i] += dp[i-1];
		}
		
		dp[i] %= MOD;
	}
	
	//for(int i=0; i<=s.length(); i++) printf("%d ", dp[i]);
	cout << dp[s.length()] % MOD;
	return 0;
}
