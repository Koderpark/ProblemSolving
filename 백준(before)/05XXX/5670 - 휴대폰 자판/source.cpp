#include <bits/stdc++.h>
using namespace std;

struct trie{
	trie *child[26] = {nullptr,};
	bool isEnd = false;
	
	~trie(){
		for(int i=0; i<26; i++) if(child[i] != nullptr) delete(child[i]);
	}
	
	void insert(string &in, int ptr){
		if(in.length() == ptr) isEnd = true;
		if(in.length() > ptr){
			int nxt = in[ptr] - 'a';
			if(child[nxt] == nullptr) child[nxt] = new trie;
			child[nxt]->insert(in, ptr+1);
		}
		return;
	}
	
	int find(string &in, int ptr){
		int nxt = in[ptr] - 'a';
		if(ptr == 0) return child[nxt]->find(in,ptr+1)+1;
		
		int ans = 0;
		if(in.length() > ptr){
			int cnt = 0;
			
			for(int i=0; i<26; i++) if(child[i] != nullptr) cnt++;
			
			if(cnt>1) ans++;
			if(isEnd && cnt==1) ans++;
			return child[nxt]->find(in, ptr+1) + ans;
		}
		return 0;
	}
};

int main(){
	int n;
	while(cin >> n){
		vector<string> v(n);
		trie t;
		int sum_v = 0;
		
		for(int i=0; i<n; i++){
			cin >> v[i];
			t.insert(v[i], 0);
		}
		
		for(int i=0; i<n; i++){
			sum_v += t.find(v[i],0);
			//printf("[%d]", t.find(v[i],0));
		}
		printf("%.2f\n", (double)sum_v/n);
	}
	
	return 0;
}
