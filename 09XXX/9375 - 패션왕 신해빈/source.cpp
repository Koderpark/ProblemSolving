#include <bits/stdc++.h>
using namespace std;

map<string, vector<string>> m;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		m.clear();
		string a,b;
		int n;
		int ans = 1;
		
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			cin >> a >> b;
			m[b].push_back(a);
		}
		
		for(auto it=m.begin(); it!=m.end(); it++){
			auto tmp = (*it);
			ans *= tmp.second.size()+1;
		}
		printf("%d\n", ans-1);
	}
}
