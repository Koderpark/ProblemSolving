#include <bits/stdc++.h>
using namespace std;

int pos[12345] = {0};

vector<int> v;

int main(){
	int n,k;
	cin >> n >> k;
	
	for(int i=0; i<n; i++) cin >> pos[i];
	sort(pos,pos+n);
	
	for(int i=1; i<n; i++) v.push_back(pos[i]-pos[i-1]);
	sort(v.begin(), v.end());
	
	
	for(int i=0; i<k-1; i++) if(!v.empty()) v.pop_back();
	
	int ans = 0;
	for(auto node : v){ ans += node; }
	cout << ans;
	return 0;
}
