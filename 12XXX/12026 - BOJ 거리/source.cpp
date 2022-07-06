#include <bits/stdc++.h>
using namespace std;

int dp[1234] = {0};

map<char,int> chtoin;
char intoch[3];


int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	string s;
	cin >> N;
	cin >> s;
	
	memset(dp, 0x3f, sizeof(dp));
	dp[0] = 0;
	
	chtoin['B'] = 0;
	chtoin['O'] = 1;
	chtoin['J'] = 2;
	
	intoch[0] = 'B';
	intoch[1] = 'O';
	intoch[2] = 'J';
	
	for(int i=1; i<N; i++){
		for(int j=0; j<i; j++){
			if(s[j] == intoch[(chtoin[s[i]]+2) % 3] && dp[j] != -1){
				dp[i] = min(dp[i], dp[j] + (i-j)*(i-j));
			}
		}
	}
	
	if(dp[N-1] == 1061109567) cout << -1;
	else cout << dp[N-1];
	return 0;
}
/*
dp[i] = i번째를 밟았을때 에너지 최솟값

dp[i] = 이전글씨일때의 j에 대하여 dp[j] + (i-j)^2; 
*/
