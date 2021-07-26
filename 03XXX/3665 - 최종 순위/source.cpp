#include <bits/stdc++.h>
using namespace std;

int g[567][567] = {0};

int indeg[567] = {0};
int arr[567] = {0};
int chk[567] = {0};

queue<int> q;

vector<int> ans;

int main(){
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		memset(indeg, 0, sizeof(indeg));
		memset(arr, 0, sizeof(arr));
		memset(chk, 0, sizeof(chk));
		memset(g, 0, sizeof(g));
		while(!q.empty()) q.pop();
		ans.clear();
		
		int n,m,a,b,k;
		
		cin >> n;
		for(int i=1; i<=n; i++){ cin >> arr[i]; }
		for(int i=1; i<=n; i++){
			for(int j=1; j<i; j++){
				g[arr[j]][arr[i]] = 1;
				indeg[arr[i]]++;
			}
		}
		
		cin >> m;
		for(int i=1; i<=m; i++){
			cin >> a >> b;
			if(g[a][b]){
				g[a][b] = 0; g[b][a] = 1;
				indeg[a]++; indeg[b]--;
			}
			else{
				g[a][b] = 1; g[b][a] = 0;
				indeg[a]--; indeg[b]++;
			}
		}
		
		for(int i=1; i<=n; i++) if(indeg[i] == 0) q.push(i);
		
		//cout << "[" << q.size() << "]";
		
		int anstype = 1;
		while(!q.empty()){
			if(q.size() >= 2){ anstype = -1; break; }
			int node = q.front(); q.pop();
			
			ans.push_back(node);
			chk[node] = 1;
			
			for(int i=0; i<567; i++){
				if(g[node][i]){
					indeg[i]--;
					if(indeg[i] == 0) q.push(i);
				}
			}
		}
		
		if(anstype == 1){
			for(int i=1; i<=n; i++) if(chk[i] == 0){ anstype = 0; break; }
		}
		
		if(anstype == 0) cout << "IMPOSSIBLE\n";
		else if(anstype == -1) cout << "?\n";
		else{
			for(int i=0; i<ans.size(); i++) cout << ans[i] << " ";
			cout << "\n";
		}
	}
	
	return 0;
}
