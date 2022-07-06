#include <bits/stdc++.h>
using namespace std;

string a;
string b;

int dp[1234][1234] = {0};
string str[1234][1234] = {""}; // 역추적용 


int main(){
	cin >> a >> b;
	
	int n,m;
	n = a.length();
	m = b.length();
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(a[i-1] == b[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
				str[i][j] = str[i-1][j-1] + a[i-1];
			}
			else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
				if(dp[i-1][j] > dp[i][j-1]) str[i][j] = str[i-1][j];
				else                        str[i][j] = str[i][j-1];
			}
		}
	}
	cout << dp[n][m] << "\n";
	if(dp[n][m]) cout << str[n][m] << "\n";
	return 0;
}
