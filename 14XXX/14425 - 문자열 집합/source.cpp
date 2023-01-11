#include <bits/stdc++.h>
using namespace std;

map<string,int> m;

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int N,M;
	cin >> N >> M;
	string s;
	for(int i=0; i<N; i++){
		cin >> s;
		m[s] = 1;
	}
	
	int ans = 0;
	for(int i=0; i<M; i++){
		cin >> s;
		if(m.find(s) != m.end()) ans++;
	}
	cout << ans;
	return 0;
}
