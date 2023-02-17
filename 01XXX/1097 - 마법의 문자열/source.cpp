#include <bits/stdc++.h>
using namespace std;

int fail[12345] = {0};
int perm[10] = {0};
string in[10];

void getpi(string s){
	memset(fail, 0, sizeof(fail));
	int N = s.length();
	for(int i=1,j=0; i<N; i++){
		while(j>0 && s[i] != s[j]) j = fail[j-1];
		if(s[i] == s[j]) fail[i] = ++j;
	}
	return;
}

int kmp(string s1, string s2){
	getpi(s2);
	
	int N = s1.length()-1;
	int M = s2.length();
	int ans = 0;
	
	for(int i=0,j=0; i<N; i++){
		while(j>0 && s1[i] != s2[j]) j = fail[j-1];
		if(s1[i] == s2[j]){
			if(j == M-1){
				ans++;
				j = fail[j];
			}
			else j++;
		}
	}
	return ans;
}

int main(){
	int N,K;
	int ans = 0;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> in[i];
	}
	cin >> K;
	
	for(int i=0; i<10; i++) perm[i] = i;
	
	do{
		string tmp = "";
		for(int i=0; i<N; i++){
			tmp += in[perm[i]];
		}
		//cout << "[" << tmp << "]\n";
		if(kmp(tmp+tmp,tmp) == K) ans++;
	}while(next_permutation(perm, perm+N));
	cout << ans;
	return 0;
}
