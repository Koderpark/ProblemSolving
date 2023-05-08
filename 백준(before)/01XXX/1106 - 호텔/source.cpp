#include <bits/stdc++.h>
#define INF 1234567890
using namespace std;

vector<pair<int,int>> v;

int dp[1234] = {0};

int main(){
	int c,n;
	int a,b;
	scanf("%d %d", &c, &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &a, &b);
		v.push_back({a,b});
	}
	
	for(int i=1; i<=c; i++){
		dp[i] = INF;
		for(int j=0; j<v.size(); j++){
			for(int k=max(i-v[j].second,0); k<=i-1; k++){
				dp[i] = min(dp[i], dp[k]+v[j].first);
			}
		}
	}
	printf("%d", dp[c]);
	return 0;
}
