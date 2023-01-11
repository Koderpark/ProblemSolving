#include <bits/stdc++.h>
using namespace std;



struct trie{
	trie* child[26] = {nullptr,};
	
	void insert(string &str, int idx){
		if(str.length() > idx){
			int nxt = str[idx]-'a';
			if(child[nxt] == nullptr) child[nxt] = new trie;
			child[nxt]->insert(str,idx+1);
		}
		return;
	}
	
	bool find(string &str, int idx){
		/*if(str.length() == idx){
			for(int i=0; i<26; i++){
				if(child[i] != nullptr) return true;
			}
			return false;
		}*/
		if(str.length() == idx) return true;
		if(str.length() > idx){
			int nxt = str[idx]-'a';
			if(child[nxt] != nullptr) return child[nxt]->find(str,idx+1);
			else return false;
		}
	}
};

int main(){
	int n,m;
	string tmp;
	cin >> n >> m;
	trie g;
	int ans = 0;
	
	for(int i=0; i<n; i++){
		cin >> tmp;
		g.insert(tmp,0);
	}
	
	for(int i=0; i<m; i++){
		cin >> tmp;
		ans += g.find(tmp,0);
	}
	
	cout << ans;
	return 0;
}
