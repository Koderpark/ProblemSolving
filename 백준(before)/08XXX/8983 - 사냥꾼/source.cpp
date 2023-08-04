#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int N,M,X;

int main(){
	int a,b;
	cin >> M >> N >> X;
	for(int i=0; i<M; i++){
		cin >> a;
		v.push_back(a);
	}
	
	sort(v.begin(), v.end());
	int ans = 0;
	
	for(int i=0; i<N; i++){
		cin >> a >> b;
		
		
		int val = 998244353;
		int idx = lower_bound(v.begin(), v.end(), a)-v.begin();
		if(idx != 0) val = min(val, abs(v[idx-1]-a) + b);
		if(idx != M) val = min(val, abs(v[idx]-a) + b);
		
		if(val <= X) ans++;
	}
	
	cout << ans;
	return 0;
}
