#include <bits/stdc++.h>
using namespace std;

struct solve{
	int cnt = 0;
	int time = 0;
	int sc = 0;
	int idx = 0;
};

bool cmp(const solve &a, const solve &b){
	if(a.sc != b.sc) return a.sc > b.sc;
	if(a.cnt != b.cnt) return a.cnt < b.cnt;
	return a.time < b.time;
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T;
	cin >> T;
	while(T--){
		int n,k,t,m;
		int a,b,c;
		cin >> n >> k >> t >> m;
		
		vector<solve> v(n+1);
		int arr[123][123] = {0};
		
		for(int i=0; i<m; i++){
			cin >> a >> b >> c;
			arr[a][b] = max(arr[a][b], c);
			v[a].cnt++;
			v[a].time = max(v[a].time, i);
			v[a].idx = a;
		}
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=k; j++){
				v[i].sc += arr[i][j];
			}
		}
		
		sort(v.begin()+1, v.end(), cmp);
		
		for(int i=1; i<=n; i++){
			if(v[i].idx == t){
				cout << i << "\n";
				break;
			}
		}
	}
	return 0;
}
