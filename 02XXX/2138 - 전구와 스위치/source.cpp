#include <bits/stdc++.h>
using namespace std;

void change(string &s, int pos){
	s[pos] = (s[pos]=='1')?'0':'1';
	if(pos != s.length()-1){
		s[pos+1] = (s[pos+1]=='1')?'0':'1';
	}
	if(pos != 0){
		s[pos-1] = (s[pos-1]=='1')?'0':'1';
	}
	return;
}

int main(){
	string s;
	string e;
	int N;
	cin >> N >> s >> e;
	
	string s1 = s;
	string s2 = s;
	int cnt1 = 0;
	int cnt2 = 0;
	
	change(s1,0);
	cnt1++;
	
	for(int i=0; i<N-1; i++){
		if(s1[i] != e[i]){
			change(s1,i+1);
			cnt1++;
		}
		if(s2[i] != e[i]){
			change(s2,i+1);
			cnt2++;
		}
	}
	
	int ans = 998244353;
	
	//printf("[%d %d]\n", cnt1, cnt2);
	
	if(s1[N-1] == e[N-1]) ans = min(ans, cnt1);
	if(s2[N-1] == e[N-1]) ans = min(ans, cnt2);
	
	//cout << s1 << "\n";
	//cout << s2 << "\n";
	
	cout << ((ans == 998244353) ? -1 : ans);
}
