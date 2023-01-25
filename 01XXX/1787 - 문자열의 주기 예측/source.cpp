#include <bits/stdc++.h>
#define INF 998244353
using namespace std;
typedef long long ll;

//fail 배열은 조건에 맞는 경우의 최대값을 저장하는중
//근데 원하는건 최소값이에요 
//전체 길이 - 최소값이 주기의 최대값이겠지 ㅇㅇ 

int fail[1234567] = {0};
int dp[1234567] = {0}; // fail의 정반대, 양수 중 가장 최소값 

int memoi(int k){
	if(k==-1 || fail[k] == 0) return INF;
	if(dp[k] != -1) return dp[k];
	return dp[k] = min(fail[k], memoi(fail[k]-1));
}

int main(){
	int N;
	string s;
	cin >> N;
	cin >> s;
	
	for(int i=1,j=0; i<N; i++){
		while(j>0 && s[i] != s[j]) j = fail[j-1]; // 뒤로 되돌아가는 순간 
		if(s[i] == s[j]) fail[i] = ++j;
	}
	
	//for(int i=0; i<N; i++) printf("{%d} ", fail[i]);
	
	memset(dp, -1, sizeof(dp));
	ll ans = 0;
	for(int i=0; i<N; i++){
		if(memoi(i) != INF){
			ans += (ll)i+1-dp[i];
		}
	}
	cout << ans;
	return 0;
}
