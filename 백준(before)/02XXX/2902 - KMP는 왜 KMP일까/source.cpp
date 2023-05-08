#include <bits/stdc++.h>
using namespace std;

int main(){
	string s,ans="";
	cin >> s;
	for(int i=0; i<s.length(); i++){
		if('A'<=s[i] && s[i]<='Z') ans += s[i];
	}
	cout << ans;
	return 0;
}
