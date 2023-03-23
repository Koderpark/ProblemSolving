#include <bits/stdc++.h>
using namespace std;

bool chk[256] = {0};

int main(){
	chk['A'] = chk['E'] = chk['I'] = chk['O'] = chk['U'] = true;
	chk['a'] = chk['e'] = chk['i'] = chk['o'] = chk['u'] = true;
	
	
	string s;
	while(1){
		getline(cin, s);
		if(s == "#") break;
		
		int ans = 0;
		for(int i=0; i<s.length(); i++){
			if(chk[s[i]]) ans++;
		}
		cout << ans << "\n";
	}
	return 0;
}
