#include <bits/stdc++.h>
using namespace std;

vector<int> g[256];

bool find(int s, int e){
	bool vis[256] = {0};
	queue<int> q;
	
	q.push(s);
	vis[s] = 1;
	
	while(!q.empty()){
		int now = q.front(); q.pop();
		for(int nxt : g[now]){
			if(!vis[nxt]){
				q.push(nxt);
				vis[nxt] = 1;
			}
			if(nxt == e) return true;
		}
	}
	return false;
}

int main(){
	int N,M;
	string s;
	
	cin >> N;
	cin.ignore();
	
	for(int i=0; i<N; i++){
		getline(cin,s);
		g[s[0]].push_back(s[5]);
	}
	
	cin >> M;
	cin.ignore();
	
	for(int i=0; i<M; i++){
		getline(cin,s);
		if(find(s[0],s[5])) cout << "T\n";
		else cout << "F\n";
	}
}
