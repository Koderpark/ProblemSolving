#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		int n,k;
		int sum=0;
		cin >> n;
		while(n--){
			cin >> k;
			sum += k;
		}
		cout << sum << "\n";
	}
	return 0;
}
