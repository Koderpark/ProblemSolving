#include <bits/stdc++.h>
using namespace std;

vector<int> outg[1234];

int ing[1234] = {0};
int tmp[1234] = {0};
int vis[1234] = {0};
queue<int> q;

vector<int> ans;

int main(){
	ios::sync_with_stdio(false);
	cout.tie();
	cin.tie();
	
	int n,m;
	cin >> n >> m;
	
	for(int i=0; i<m; i++){
		memset(tmp, 0, sizeof(tmp));
		int a,b,c;
		cin >> a >> b;
		for(int j=0; j<a-1; j++){
			cin >> c;
			ing[c]++;
			outg[b].push_back(c);
			b = c;
		}
	}
	
	for(int i=1; i<=n; i++) if(ing[i] == 0) q.push(i);
	
	while(!q.empty()){
		int node = q.front(); q.pop();
		
		ans.push_back(node);
		vis[node] = 1;
		
		for(int i=0; i<outg[node].size(); i++){
			int tmp = outg[node][i];
			ing[tmp]--;
			if(ing[tmp] == 0) q.push(tmp);
		}
	}
	bool flag = false;
	for(int i=1; i<=n; i++) if(vis[i] == 0){ flag = true; break; }
	
	
	if(flag) cout << 0;
	else for(int i=0; i<ans.size(); i++) cout << ans[i] << "\n";
	return 0;
}
