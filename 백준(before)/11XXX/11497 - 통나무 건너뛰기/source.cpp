#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		int n,a;
		vector<int> v;
		
		cin >> n;
		for(int i=0; i<n; i++){ cin >> a; v.push_back(a); }
		
		sort(v.begin(), v.end());
		
		int ans = max(v[1]-v[0], v[n-1]-v[n-2]);
		for(int i=2; i<n; i++){
			ans = max(ans, v[i]-v[i-2]);
		}
		cout << ans << "\n";
	}
	return 0;
}
