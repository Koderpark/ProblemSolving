#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	while(N--){
		string s;
		cin >> s;
		if(s.length() >= 6 && s.length() <= 9) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}
