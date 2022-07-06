#include <bits/stdc++.h>
using namespace std;

string str;
string ans = "";

stack<char> s;

int main(){
	cin >> str;
	for(int i=0; i<str.length(); i++){
		if('A' <= str[i] && str[i] <= 'Z') ans += str[i];
		if('(' == str[i]) s.push(str[i]);
		if(')' == str[i]){
			while(!s.empty() && s.top() != '('){ ans += s.top(); s.pop(); }
			s.pop();
		}
		if('*' == str[i] || '/' == str[i]){
			while(!s.empty() && (s.top() == '*' || s.top() == '/')){ ans += s.top(); s.pop(); }
			s.push(str[i]);
		}
		if('+' == str[i] || '-' == str[i]){
			while(!s.empty() && s.top() != '('){ ans += s.top(); s.pop(); }
			s.push(str[i]);
		}
	}
	while(!s.empty()){ ans += s.top(); s.pop(); }
	cout << ans;
}
