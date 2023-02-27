#include <bits/stdc++.h>
using namespace std;

set<int> s;
unordered_map<int,int> st;
unordered_map<int,int> ed;

int main(){
	int N;
	int a,b,c;
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> a >> b >> c;
		s.insert(b);
		s.insert(c);
		st[b]++;
		ed[c]++;
	}
	
	int val = 0;
	int ans = 0;
	for(auto k : s){
		val += st[k];
		val -= ed[k];
		
		ans = max(ans,val);
	}
	
	cout << ans;
	return 0;
}
