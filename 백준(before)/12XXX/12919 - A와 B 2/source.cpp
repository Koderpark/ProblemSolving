#include <bits/stdc++.h>
using namespace std;

unordered_map<string,int> m;
queue<string> q;

string st,ed;
int N;

void bfs(string s){
	string now, nxt;
	int len;
	
	q.push(s);
	m[s] = 1;
	
	while(!q.empty()){
		now = q.front(); q.pop();
		len = now.length();
		
		if(now[0] == 'B'){
			nxt = now.substr(1);
			reverse(nxt.begin(), nxt.end());
			
			if(m[nxt] == 0 && nxt.length() >= N){
				q.push(nxt);
				m[nxt] = 1;
			}
		}
		
		if(now[len-1] == 'A'){
			nxt = now.substr(0,len-1);
			
			if(m[nxt] == 0 && nxt.length() >= N){
				q.push(nxt);
				m[nxt] = 1;
			}
		}
	}
	return;
}

int main(){
	cin >> st >> ed;
	N = st.length();
	
	bfs(ed);
	
	cout << m[st];
	
	return 0;
}
