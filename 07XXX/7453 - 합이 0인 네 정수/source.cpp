#include <bits/stdc++.h>
using namespace std;

vector<int> v1;
vector<int> v2;

int a[4567];
int b[4567];
int c[4567];
int d[4567];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	for(int i=0; i<n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			v1.push_back(a[i]+b[j]);
			v2.push_back(c[i]+d[j]);
		}
	}
	
	sort(v2.begin(), v2.end());
	
	long long int ans = 0;
	for(int i=0; i<v1.size(); i++){
		auto s = lower_bound(v2.begin(), v2.end(), -v1[i]);
		auto e = upper_bound(v2.begin(), v2.end(), -v1[i]);
		
		if(*s == -v1[i]) ans += e-s;
	}
	cout << ans;
	return 0;
}
