#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	s += "....";
	for(int i=0; i<s.length()-4; i++){
		if(s[i] == 'X' && s[i+1] == 'X' && s[i+2] == 'X' && s[i+3] == 'X'){
			s[i]   = 'A';
			s[i+1] = 'A';
			s[i+2] = 'A';
			s[i+3] = 'A';
		}
		else if(s[i] == 'X' && s[i+1] == 'X'){
			s[i]   = 'B';
			s[i+1] = 'B';
		}
	}
	
	bool ans = false;
	for(int i=0; i<s.length(); i++){
		if(s[i] == 'X') ans = true;
	}
	if(ans) cout << -1;
	else for(int i=0; i<s.length()-4; i++) cout << s[i];
	return 0;
}
