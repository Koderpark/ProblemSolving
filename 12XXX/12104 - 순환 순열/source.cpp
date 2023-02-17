#include <bits/stdc++.h>
using namespace std;

int N;
int M;
int fail[234567] = {0};

int main(){
	string s1;
	string s2;
	cin >> s1 >> s2;
	
	s1 += s1;
	
	N = s1.length()-1;
	M = s2.length();
	
	for(int i=1,j=0; i<M; i++){
		while(j>0 && s2[i] != s2[j]) j = fail[j-1];
		if(s2[i] == s2[j]) fail[i] = ++j;
	}
	
	int ans = 0;
	for(int i=0,j=0; i<N; i++){
		while(j>0 && s1[i] != s2[j]) j = fail[j-1];
		if(s1[i] == s2[j]){
			if(j == M-1){
				ans++;
				j = fail[j];
			}
			else ++j;
		}
	}
	cout << ans;
	return 0;
}
