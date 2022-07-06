#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
	int n,k;
	cin >> n >> k;
	
	for(int i=1; i<=n; i++){
		if(n%i == 0) v.push_back(i);
	}
	
	if(v.size() <= k-1) cout << 0;
	else cout << v[k-1];
	return 0;
}
