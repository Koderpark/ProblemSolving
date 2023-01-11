#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	while(1){
		int n,k;
		cin >> n >> k;
		if(n==0 && k==0) break;
		
		k = min(k,n-k);
		
		ll ans = 1;
		for(int i=1; i<=k; i++){
			ans *= n;
			ans /= i;
			n--;
		}
		cout << ans << "\n";
	}
}


//nCr = n!/(n-r)!*r!
