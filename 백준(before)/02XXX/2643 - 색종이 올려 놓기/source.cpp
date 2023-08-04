#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int dp[123] = {0};
vector<pair<int,int>> v;

int main(){
	int N,a,b;
	int ans = 0;
	
	cin >> N;
	for(int i=1; i<=N; i++){
		cin >> a >> b;
		v.push_back({max(a,b),min(a,b)});
	}
	
	sort(v.begin(), v.end(), greater<pair<int,int>>());
	
	for(int i=0; i<N; i++){
		dp[i] = 1;
		for(int j=0; j<i; j++){
			if(v[j].x >= v[i].x && v[j].y >= v[i].y){
				dp[i] = max(dp[i], dp[j]+1);
				ans = max(ans, dp[i]);
			}
		} 
	}
	cout << ans;
	return 0;
}
