#include <bits/stdc++.h>
using namespace std;

string s[56];
bool chk[56] = {0};

bool isprefix(string a, string b){
	for(int i=0; i<b.length(); i++){
		if(a[i] != b[i]) return false;
	}
	return true;
}

bool cmp(const string &a, const string &b){
	if(a.length() == b.length()) return a > b;
	else return a.length() > b.length();
}

int main(){
	int N;
	int ans;
	cin >> N;
	for(int i=0; i<N; i++) cin >> s[i];
	
	sort(s, s+N, cmp);
	ans = N;
	
	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			if(i == j) continue;
			
			if(isprefix(s[i], s[j]) && !chk[j]){
				chk[j] = true;
				ans--;
			}
		}
	}
	
	cout << ans;
	return 0;
}
