#include <bits/stdc++.h>
using namespace std;

multiset<int> s;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	int t,k;
	int a;
	char c;
	
	cin >> t;
	while(t--){
		s.clear();
		cin >> k;
		while(k--){
			cin >> c >> a;
			if(c == 'I') s.insert(a);
			if(c == 'D'){
				if(!s.empty()){
					if(a == 1)  s.erase(--s.end());
					if(a == -1) s.erase(s.begin());
				} 
			}
		}
		if(s.empty()) cout << "EMPTY\n";
		else cout << *(--s.end()) << " " << *(s.begin()) << "\n";
	}
	return 0;
}
