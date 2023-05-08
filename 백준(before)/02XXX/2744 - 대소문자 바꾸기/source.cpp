#include <bits/stdc++.h>
using namespace std;

map<char,char> m;

int main(){
	for(int i='a'; i<='z'; i++){
		m[i] = i-32;
		m[i-32] = i;
	}
	
	string s,ans="";
	cin >> s;
	for(int i=0; i<s.length(); i++){
		ans += m[s[i]];
	}
	cout << ans;
	return 0;
}
