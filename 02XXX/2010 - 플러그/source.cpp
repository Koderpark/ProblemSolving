#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int k;
	int ans = 0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> k;
		ans += k;
	}
	
	cout << ans - n+1;
	return 0;
}
