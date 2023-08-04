#include<bits/stdc++.h>
using namespace std;

stack<char> st;

int main(){
	int N,M;
	string s;
	string ans;
	
	cin >> N >> M;
	cin >> s;
	
	for(auto c : s){
		while(M && st.size() && st.top() < c){ M--; st.pop(); }
		st.push(c);
	}
	
	while(!st.empty()){ ans += st.top(); st.pop(); }
	for(int i=ans.length(); i-M; i--) cout << ans[i-1];
	return 0;
}
