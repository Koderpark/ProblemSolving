#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> point;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n,a,b;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> a >> b;
		point.push_back({a,1});
		point.push_back({b,-1});
	}
	
	sort(point.begin(),point.end());
	
	int tmp = 0;
	int ans = 0;
	for(auto it : point){
		tmp += it.second;
		ans = max(ans,tmp);
	}
	cout << ans;
	return 0;
}
