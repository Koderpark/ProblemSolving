#include <bits/stdc++.h>
using namespace std;

int dp[1234][1234] = {0};
//dp (i,j) -> a문자열 i번째, b문자열 j번째까지 탐색했을때의 LCS 최대값 

string back = "";
string a,b;
	
string find(int val, int x, int y){
	if(dp[x][y]   == 0) return "";
	if(dp[x-1][y] == val) return find(val, x-1, y);
	if(dp[x][y-1] == val) return find(val, x, y-1);
	
	return find(val-1, x-1, y-1) + a[x-1];
}

int main(){
	cin >> a >> b;
	
	for(int i=1; i<=a.length(); i++){
		for(int j=1; j<=b.length(); j++){
			
			if(a[i-1] == b[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
			}
			else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}
	
	/*printf("        "); for(int i=0; i<=b.length(); i++) printf("%c   ", b[i]); puts("");
	for(int i=0; i<=a.length(); i++,puts("")){
		if(i) printf("%c", a[i-1]);
		else printf(" ");
		for(int j=0; j<=b.length(); j++){
			printf("%4d", dp[i][j]);
		}
	}*/
	
	cout << dp[a.length()][b.length()] << "\n";
	cout << find(dp[a.length()][b.length()], a.length(), b.length());
	return 0;
}
