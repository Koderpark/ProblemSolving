#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[123456] = {0};
ll prf[123456] = {0};

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin >> N;
	for(int i=1; i<=N; i++){
		cin >> arr[i];
		prf[i] = prf[i-1] + arr[i];
	}
	
	ll ans = -1;
	
	for(int i=2; i<N; i++){ // 国烹 坷弗率 场.
		ans = max(ans, prf[N]*2-prf[1]-prf[i]-arr[i]);
	}
	
	for(int i=2; i<N; i++){ // 国烹 吝埃.
		ans = max(ans, prf[N]+arr[i] -arr[1] - arr[N]);
	}
	
	for(int i=2; i<N; i++){ // 国烹 哭率 场. 
		ans = max(ans, prf[N]-arr[N]-arr[i] + prf[i]-arr[i]);
	}
	
	cout << ans;
	return 0;
}
