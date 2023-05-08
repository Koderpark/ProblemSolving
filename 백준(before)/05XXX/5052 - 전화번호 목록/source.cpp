#include <bits/stdc++.h>
using namespace std;

bool cmp(string &s1, string &s2){
	if(s1.length() != s2.length()) return s1.length() > s2.length();
	return s1 > s2;
}

struct trie{
	trie* child[11] = {nullptr,};
	
	bool insert(string &str, int idx){
		int nxt = str[idx]-'0';
		
		if(str.length() == idx){
			for(int i=0; i<11; i++){
				if(child[i] != nullptr){
					return false;
				}
			}
			return true;
		}
		else{
			if(child[nxt] == nullptr) child[nxt] = new trie;
			return child[nxt] -> insert(str, idx+1);
		}
	}
};

int main(){	
	int t,n;
	string tmp;
	vector<string> v;
	
	cin >> t;
	while(t--){
		trie g;
		
		v.clear();
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> tmp;
			v.push_back(tmp);
		}
		
		sort(v.begin(), v.end(), cmp);
		
		for(int i=0; i<n; i++){
			bool chk = g.insert(v[i], 0);
			if(chk == false){ cout << "NO\n"; goto flag; }
		}
		cout << "YES\n";
		flag:; 
	}
	return 0;
}
