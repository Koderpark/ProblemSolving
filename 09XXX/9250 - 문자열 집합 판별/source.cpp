#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct TRIE{
	TRIE* alpha[26];
	TRIE* fail;
	bool ans;
	
	TRIE(){
		for(int i=0; i<26; i++) alpha[i] = NULL;
		fail = NULL;
		ans = false;
	}
	~TRIE(){ for(int i=0; i<26; i++) if(alpha[i]) delete alpha[i]; }
	
	void insert(string s, int idx){
		if(idx == s.length()){ ans = true; return; }
		
		int next = s[idx]-'a';
		if(alpha[next] == NULL){ alpha[next] = new TRIE; }
		alpha[next]->insert(s, idx+1);
	}
};

queue<TRIE*> q;
TRIE *root = new TRIE;

void bfs(){
	while(!q.empty()){
		TRIE* curr = q.front();
		q.pop();
		for(int i=0; i<26; i++){
			if(curr->alpha[i]){
				TRIE* next = curr->alpha[i];
				
				if(curr == root) next->fail = root;
				else{
					TRIE* prev = curr->fail;
					while(prev != root && !prev->alpha[i]) prev = prev->fail;
					if(prev->alpha[i]) prev = prev->alpha[i];
					next->fail = prev;
				}
				
				if(next->fail->ans) next->ans = true;
				q.push(next);
			}
		}
	}
}

int main(){
	int    n,m;
	bool   chk;
	string tmp;
	root->fail = root;
	
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> tmp;
		root->insert(tmp,0);
	}
	
	q.push(root);
	bfs();
	
	cin >> m;
	while(m--){
		cin >> tmp;
		chk=0;
		TRIE* curr = root;
		for(int i=0; i<tmp.length(); i++){
			int next = tmp[i]-'a';
			
			while(curr != root && !curr->alpha[next]) curr = curr->fail;
			
			if(curr->alpha[next]) curr = curr->alpha[next];
			if(curr->ans){ chk=1; break; }
		}
		
		if(chk) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
