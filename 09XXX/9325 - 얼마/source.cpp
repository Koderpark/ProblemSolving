#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int s,n,a,b;
		cin >> s;
		cin >> n;
		
		for(int i=0; i<n; i++){
			cin >> a >> b;
			n += a*b;
		}
		cout << n << "\n";
	}
	return 0;
}
