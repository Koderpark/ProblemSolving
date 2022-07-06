#include <bits/stdc++.h>
using namespace std;

vector<int> outdeg[12345];

int indeg[12345] = {0};
int timer[12345] = {0};
int ans[12345] = {0};

queue<int> q;

int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){
		int a,b;
		cin >> timer[i] >> a;
		for(int j=0; j<a; j++){
			cin >> b;
			indeg[i]++;
			outdeg[b].push_back(i);
		}
	}
	
	for(int i=1; i<=n; i++) if(indeg[i] == 0) { q.push(i); ans[i] = timer[i]; }
	
	while(!q.empty()){
		int node = q.front(); q.pop();
		
		for(int i=0; i<outdeg[node].size(); i++){
			int tmp = outdeg[node][i];
			indeg[tmp]--;
			if(indeg[tmp] == 0) q.push(tmp);
			ans[tmp] = max(ans[tmp], ans[node]+timer[tmp]);
		}
	}
	
	int maxv = 0;
	for(int i=1; i<=n; i++) maxv = max(maxv, ans[i]);
	cout << maxv;
	return 0;
}
