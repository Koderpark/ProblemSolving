#include <bits/stdc++.h>
using namespace std;

queue<pair<int,string>> q;
int input,ans;

int d1,d2,d3,d4;
int k,t;
string s;

int vis[12345] = {0};

void bfs(){
	while(!q.empty()){
		k = q.front().first;
		s = q.front().second;
		q.pop();
		
		if(k == ans){
			cout << s << "\n";
			return;
		}
		
		t = (k*2)%10000;
		if(!vis[t]){ vis[t] = 1; q.push({t, s+"D"}); }
		
		t = (k==0)?9999:k-1;
		if(!vis[t]){ vis[t] = 1; q.push({t, s+"S"}); }
		
		t = (k%1000)*10 + (k/1000);
		if(!vis[t]){ vis[t] = 1; q.push({t, s+"L"}); }
		
		t = (k%10)*1000 + (k/10);
		if(!vis[t]){ vis[t] = 1; q.push({t, s+"R"}); }
	}
	return;
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		while(!q.empty()) q.pop();
		memset(vis, 0, sizeof(vis));
		
		cin >> input >> ans;
		q.push({input,""});
		bfs();
	}
	return 0;
}
