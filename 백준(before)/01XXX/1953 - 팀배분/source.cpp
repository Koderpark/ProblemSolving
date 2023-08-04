#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> hate[123];

int team[123];

void dfs(int node){
	for(auto nxt : hate[node]){
		if(team[nxt] == -1){
			if(team[node] == 0) team[nxt] = 1;
			if(team[node] == 1) team[nxt] = 0;
		
			dfs(nxt);	
		}
	}
	return;
}

int main(){
	memset(team, -1, sizeof(team));
	
	cin >> N;
	for(int i=1; i<=N; i++){
		int a,b;
		cin >> a;
		for(int j=0; j<a; j++){
			cin >> b;
			hate[i].push_back(b);
		}
	}
	
	for(int i=1; i<=N; i++){
		if(team[i] == -1) team[i] = 0;
		dfs(i);
	}
	
	int blue = 0;
	int white = 0;
	vector<int> blist;
	vector<int> wlist;
	
	for(int i=1; i<=N; i++){
		if(team[i] == 0){
			blue++;
			blist.push_back(i);
		}
		if(team[i] == 1){
			white++;
			wlist.push_back(i);
		}
	}
	
	cout << blue << "\n";
	for(auto k : blist) cout << k << " "; cout << "\n";
	
	cout << white << "\n";
	for(auto k : wlist) cout << k << " "; cout << "\n";
}
