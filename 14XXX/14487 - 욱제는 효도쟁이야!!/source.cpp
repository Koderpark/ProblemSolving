#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	int n,k,sum=0,maxv=0;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> k;
		maxv = max(maxv,k);
		sum += k;
	}
	cout << sum - maxv;
	return 0;
}
