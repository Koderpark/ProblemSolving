#include <bits/stdc++.h>
using namespace std;

int fail[1234567] = {0};

int main(){
	int N;
	cin >> N;
	string s;
	cin >> s;
	
	for(int i=0,j=1; j<N; j++){
		while(i>0 && s[i] != s[j]) i = fail[i-1];
		if(s[i] == s[j]) fail[j] = ++i;
	}
	
	cout << N - fail[N-1];
	return 0;
}
