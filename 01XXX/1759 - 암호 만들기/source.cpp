#include <bits/stdc++.h>
using namespace std;

int L,C;
char arr[15];
string mo = "aeiou";

bool chk(string s){
	int c_mo = 0;
	int c_ja = 0;
	
	for(char k : s){
		if(k=='a' || k=='e' || k=='i' || k=='o' || k=='u') c_mo++;
		else c_ja++;
	}
	
	if(c_ja>=2 && c_mo >=1) return true;
	else return false;
}

void dfs(string s, int idx){
	if(idx > C) return;
	
	if(s.length() == L){
		if(chk(s)) cout << s << "\n";
		return;
	}
	
	dfs(s+arr[idx], idx+1);
	dfs(s, idx+1);
	return;
}

int main(){
	cin >> L >> C;
	for(int i=0; i<C; i++){ cin >> arr[i]; }
	
	sort(arr, arr+C);
	
	dfs("", 0);
}
