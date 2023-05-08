#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int n;
	cin >> n;
	
	int ans = 0;
	
	for(int i=1; i<100000; i++){
		ll tmp = (ll)i*i;
		if(tmp <= n) ans++;
	}
	cout << ans;
	return 0;
}
