#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	
	if(n==1){
		cout << 1;
		return 0;
	}
	
	long long k = 2;
	while(k<n){
		k *= 2;
	}
	if(k == n) cout << 1;
	else cout << 0;
	return 0;
}
