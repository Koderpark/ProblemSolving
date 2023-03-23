#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		
		for(int i=0; i<s.length(); i++){
			if('A'<=s[i] && s[i]<='Z'){
				s[i] = s[i]-'A'+'a';
			}
		}
		
		cout << s << "\n";
	}
	return 0;
}
