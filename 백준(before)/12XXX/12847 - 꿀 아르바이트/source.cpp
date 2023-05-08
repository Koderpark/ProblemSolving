#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[123456] = {0};

int main(){
	int n,m;
	ll sum = 0;
	ll ans = -1;
	cin >> n >> m;
	for(int i=0; i<n; i++) cin >> arr[i];
	
	for(int i=0; i<m; i++) sum += arr[i];
	ans = max(ans, sum);
	
	for(int i=m; i<n; i++){
		sum -= arr[i-m];
		sum += arr[i];
		ans = max(ans, sum);
	}
	cout << ans;
	return 0;
}
