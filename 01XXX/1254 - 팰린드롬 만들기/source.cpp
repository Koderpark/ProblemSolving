#include <bits/stdc++.h>
using namespace std;

string s;

int min(int a, int b){ return a>b?b:a; }

int chk(int idx){
	int r = s.length()-1;
	for(int l=idx; l<=r; l++, r--){
		if(s[l] != s[r]) return 0;
	}
	return 1;
}

int main(){
	cin >> s;
	
	int ans = 9999;
	
	for(int i=0; i<s.length(); i++){
		if(chk(i)) ans = min(ans, s.length()+i);
	}
	
	printf("%d", ans);
	return 0;
}
