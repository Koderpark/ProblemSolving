#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,a,b,c;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> a >> b >> c;
		
		if(a+c < b) cout << "advertise\n";
		else if(a+c > b) cout << "do not advertise\n";
		else cout << "does not matter\n";
	}
	return 0;
}
