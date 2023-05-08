#include <bits/stdc++.h>
using namespace std;

int fail[1234567] = {0};

int main(){
	int N;
	string s;
	cin >> N >> s;
	
	for(int i=1,j=0; i<N; i++){
		while(j>0 && s[i] != s[j]) j = fail[j-1];
		if(s[i] == s[j]) fail[i] = ++j;
	}
	
	cout << N-fail[N-1];
	return 0;
}
