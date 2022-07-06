#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int k;
	cin >> n;
	while(1){
		cin >> k;
		if(k==0) break;
		if(k%n == 0) cout << k << " is a multiple of " << n << ".\n";
		else cout << k << " is NOT a multiple of " << n << ".\n";
	}
	return 0;
}
