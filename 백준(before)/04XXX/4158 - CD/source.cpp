#include <bits/stdc++.h>
using namespace std;

unordered_map<int,int> m;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	while(1){
		m.clear();
		
		int N,M,k;
		cin >> N >> M;
		if(!N && !M) break;
		
		for(int i=0; i<N; i++){ cin >> k; m[k]++; }
		for(int i=0; i<M; i++){ cin >> k; m[k]++; }
	
		int ans = 0;
		for(auto k : m){
			if(k.second == 2){
				ans++;
			}
		}
		cout << ans << "\n";
	}
} 
