#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		string k;
		cin >> k;
		if((k[k.length()-1]-'0')%2) cout << "odd\n";
		else cout << "even\n";
	}
	return 0;
}
