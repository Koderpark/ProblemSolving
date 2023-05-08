#include <bits/stdc++.h>
using namespace std;

bool isvowel[256] = {0};

int main(){
	string s;
	isvowel['a'] = true;
	isvowel['e'] = true;
	isvowel['i'] = true;
	isvowel['o'] = true;
	isvowel['u'] = true;
	
	while(1){
		cin >> s;
		if(s == "end") break;
		
		bool isRepeat = false;
		bool isAEIOU = false;
		bool isThree = false;
		
		int A = 0;
		int B = 0;
		
		for(int i=0; i<s.length(); i++){
			if(i != s.length()-1 && s[i] == s[i+1] && (s[i] != 'e' && s[i] != 'o')) isRepeat = true;
			if(isvowel[s[i]]) isAEIOU = true;
			
			if(isvowel[s[i]]){
				A++;
				if(A >= 3){ isThree = true; }
				B = 0;
			}else{
				B++;
				if(B >= 3){ isThree = true; }
				A = 0;
			}
		}
		
		if(isRepeat || !isAEIOU || isThree){
			cout << "<" << s << "> is not acceptable.\n";
		}
		else cout << "<" << s << "> is acceptable.\n";
	}
	return 0;
}
