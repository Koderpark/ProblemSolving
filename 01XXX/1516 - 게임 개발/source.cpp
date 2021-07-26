#include <bits/stdc++.h>
using namespace std;

vector<int> outdegree[567];

int incnt[567] = {0};
int timer[567] = {0};
int ans[567] = {0};

queue<int> q;

int main(){
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	for(int i=1; i<=n; i++){
		int a;
		cin >> timer[i];
		while(1){
			cin >> a;
			if(a == -1) break;
			outdegree[a].push_back(i);
			incnt[i]++;
		}
	}
	
	for(int i=1; i<=n; i++) if(incnt[i] == 0) { q.push(i); ans[i] = timer[i]; }
	
	while(!q.empty()){
		int node = q.front(); q.pop();
		
		for(int i=0; i<outdegree[node].size(); i++){
			int tmp = outdegree[node][i];
			incnt[tmp]--;
			if(incnt[tmp] == 0) q.push(tmp);
			ans[tmp] = max(ans[tmp], ans[node]+timer[tmp]);
		}
	}
	
	for(int i=1; i<=n; i++) cout << ans[i] << "\n";
	return 0;
}
