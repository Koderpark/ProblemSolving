#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> g;
map<int,int> m;

void dfs(int w, int idx){
	if(idx == N+1) return;
	m[w] = 1;
	
	dfs(w+g[idx], idx+1);
	dfs(w-g[idx], idx+1);
	dfs(w, idx+1);
	return;
}

int main(){
	int k;
	int S=0;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> k;
		g.push_back(k);
		S += k;
	}
	
	dfs(0,0);
	
	int ans = 0;
	for(int i=1; i<=S; i++){
		if(m.find(i) == m.end()) ans++; 
	}
	cout << ans;
	return 0;
}
