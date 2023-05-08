#include <bits/stdc++.h>
using namespace std;

int fail[2345678]= {0};

int main(){
	string s;
	while(cin >> s){
		if(s == ".") break;
		s = s+s;
		memset(fail, 0, sizeof(fail));
		
		int N = s.length();
		
		for(int i=0,j=1; j<N; j++){
			while(i && s[i] != s[j]) i = fail[i-1];
			if(s[i] == s[j]) fail[j] = ++i;
		}
		
		int tmp = (N)-fail[N-1];
		cout << N/tmp/2 << "\n";
	}
	return 0;
}
