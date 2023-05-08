#include <bits/stdc++.h>
using namespace std;

struct trie{
	map<string,trie*> child;
	
	void insert(vector<string> &v, int idx){
		if(v.size() > idx){
			string nxt = v[idx];
			if(child.find(nxt) == child.end()) child[nxt] = new trie;
			child[nxt]->insert(v, idx+1);
		}
		return;
	}
	
	void dfs(int space){
		for(auto k : child){
			for(int i=0; i<space; i++) cout << " ";
			cout << k.first << "\n";
			
			k.second->dfs(space+1);
		}
	}
}g;


int main(){
	int n;
	string input;
	string token;
	vector<string> v;
	cin >> n;
	for(int i=0; i<n; i++){
		v.clear();
		token = "";
		cin >> input;
		for(auto k : input){
			if(k == '\\'){
				v.push_back(token);
				token = "";
			}
			else{
				token += k;
			}
		}
		v.push_back(token);
		g.insert(v, 0);
	}
	
	g.dfs(0);
	return 0;
}
