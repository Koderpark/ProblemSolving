#include <bits/stdc++.h>
using namespace std;

int fail[1234567] = {0};
int fail2[1234567] = {0};

void make_fail(string s){
	int N = s.length();
	memset(fail, 0, sizeof(fail));
	for(int i=1,j=0; i<N; i++){
		while(j>0 && s[i] != s[j]) j = fail[j-1];
		if(s[i] == s[j]) fail[i] = ++j;
	}
	return;
}

int kmp(string s1, string s2){
	make_fail(s2);
	
	int N = s1.length();
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
	string s1;
	cin >> s1;
	make_fail(s1);
	
	for(int i=0; i<1234567; i++) fail2[i] = fail[i];
	int K = fail2[s1.length()-1];

	while(K){
		string tmp = s1.substr(0,K);
		if(kmp(s1,tmp) >= 3){
			cout << tmp;
			return 0;
		}
		K = fail2[K-1];
	}
	
	cout << -1;
	return 0;	
}
