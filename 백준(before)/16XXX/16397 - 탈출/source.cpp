#include <bits/stdc++.h>
#define MAX 998244353
using namespace std;

int dp[123456] = {0};
// dp[k] : 숫자 K를 만드는데 필요한 최소한의 버튼누름 횟수. 

int A(int k){
	if(k+1 > 99999) return -1;
	return k+1;
}

int B(int k){
	if(k == 0) return k;
	k *= 2;
	
	if(k > 99999) return -1;
	
	int tmp = 1;
	for(int i=k; i>=10; i/=10) tmp *= 10;
	return k-tmp;
}

void bfs(int k){
	for(int i=0; i<123456; i++) dp[i] = MAX;
	
	int a,b;
	queue<int> q;
	q.push(k);
	dp[k] = 0;

	while(!q.empty()){
		int now = q.front();
		q.pop();
		
		a = A(now);
		b = B(now);
		
		if(a != -1 && dp[a] == MAX){
			dp[a] = dp[now]+1;
			q.push(a);
		}
		if(b != -1 && dp[b] == MAX){
			dp[b] = dp[now]+1;
			q.push(b);
		}
	}
	return;
}

int main(){
	int N,T,G;
	cin >> N >> T >> G;
	
	bfs(N); // N -> G;
	int ans = dp[G];
	
	if(ans == MAX || ans > T) cout << "ANG";
	else cout << ans;
	return 0;
}
