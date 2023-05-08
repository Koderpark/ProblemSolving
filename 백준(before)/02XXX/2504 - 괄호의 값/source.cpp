#include <bits/stdc++.h>
using namespace std;

string s;
stack<char> st;
int tmp=1;
int ans=0;

int main(){
	cin >> s;
	for(int i=0; i<s.length(); i++){
		if(s[i] == '('){ tmp*=2; st.push('('); }
		if(s[i] == '['){ tmp*=3; st.push('['); }
		if(s[i] == ')'){
			if(st.empty() || st.top() != '('){ ans = 0; break; }
			else{
				if(s[i-1] == '(') ans += tmp;
				tmp/=2;
				st.pop();
			}
		}
		if(s[i] == ']'){
			if(st.empty() || st.top() != '['){ ans = 0; break; }
			else{
				if(s[i-1] == '[') ans += tmp;
				tmp/=3;
				st.pop();
			}
		}
	}
	
	if(!st.empty()) printf("0");
	else printf("%d", ans);
	return 0;
}
