#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

bool isalpha(char c){
	return 'a' <= c && c <= 'z';
}

bool cmp(const string &a, const string &b){
	if(a.length() == b.length()) return a<b;
	return a.length() < b.length();
}

string cut(string a){
	bool flag = false;
	string ret = "";
	for(int i=0; i<a.length(); i++){
		if(a[i] != '0') flag = true;
		if(flag){
			ret += a[i];
		}
	}
	if(ret == "") return "0";
	return ret;
}

int main(){
	int N;
	string s;
	
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> s;
		string var;
		
		for(int j=0; j<s.length(); j++){
			if(isalpha(s[j])){
				if(!j || isalpha(s[j-1])) continue;
				ans.push_back(cut(var));
				var = "";
			}
			else{
				var += s[j];
			}
		}
		if(var != "") ans.push_back(cut(var));
	}
	
	sort(ans.begin(), ans.end(), cmp);
	for(auto k : ans){ cout << k << "\n"; }
	return 0;
}
