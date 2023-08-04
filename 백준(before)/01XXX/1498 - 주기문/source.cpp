#include<bits/stdc++.h>
using namespace std;

int fail[1234567] = {0}; 

int main(){
	string s;
	cin >> s;
	
	int N = s.length();
	
	for(int i=1,j=0; i<N; i++){
		while(j && s[i] != s[j]) j = fail[j-1];
		if(s[i] == s[j]) fail[i] = ++j;
	}
	
	for(int i=1; i<N; i++){
		int len = (i+1)-fail[i];
		if(fail[i] && (i+1)%len == 0){
			printf("%d %d\n", (i+1),(i+1)/len);
		}
	}
	return 0;
}
