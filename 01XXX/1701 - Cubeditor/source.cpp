#include <bits/stdc++.h>
using namespace std;

int fail[5678] = {0};

int main(){
	string s;
	cin >> s;
	
	int N = s.length();
	
	int ans = -1;
	while(N){
		memset(fail, 0, sizeof(fail));
		
		//cout << "[" << s << "]\n";
		
		for(int i=0,j=1; j<N; j++){
			while(i>0 && s[i] != s[j]) i = fail[i-1];
			if(s[i] == s[j]) fail[j] = ++i;
		}
		
		for(int i=1; i<=N; i++){ ans = max(fail[i], ans); }
		s = s.substr(1);
		N--;
	}
	cout << ans;
	return 0;
}
