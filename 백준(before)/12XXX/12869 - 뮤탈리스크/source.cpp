#include <bits/stdc++.h>
using namespace std;

int dp[99][99][99];

int find(int a, int b, int c){
	a = max(a,0);
	b = max(b,0);
	c = max(c,0);
	
	if(dp[a][b][c] != -1) return dp[a][b][c];
	
	return dp[a][b][c] = min({
		find(a-9,b-3,c-1)+1,
		find(a-9,b-1,c-3)+1,
		find(a-3,b-9,c-1)+1,
		find(a-3,b-1,c-9)+1,
		find(a-1,b-3,c-9)+1,
		find(a-1,b-9,c-3)+1
	});
}

int main(){
	memset(dp, -1, sizeof(dp));
	dp[0][0][0] = 0;
	
	int N,arr[3] = {0};
	
	cin >> N;
	for(int i=0; i<N; i++) cin >> arr[i];
	
	cout << find(arr[0],arr[1],arr[2]);
	return 0;
}
