#include <bits/stdc++.h>
using namespace std;

stack<pair<char, int>> s;

int main(){
	string a,b;
	cin >> a;
	cin >> b;
	
	int ptr = 0;
	for(int i=0; i<a.length(); i++){
		if(a[i] == b[ptr]) ptr++;
		else if(a[i] == b[0]) ptr = 1;
		else ptr = 0;
		
		s.push({a[i], ptr});
		if(ptr == b.length()){
			while(ptr){s.pop(); ptr--;}
			if(!s.empty()) ptr = s.top().second;
		}
	}
	
	if(s.empty()){ cout << "FRULA"; return 0; }
	
	string ans = "";
	while(!s.empty()){ ans += s.top().first; s.pop(); }
	reverse(ans.begin(), ans.end());
	cout << ans;
	return 0;
}
