#include <bits/stdc++.h>
using namespace std;

int t,n,tmp;
int parent[234567];
int num[234567];
string s1, s2;
map<string,int> m;

int find(int k){
	if(k == parent[k]) return k;
	return parent[k] = find(parent[k]);
}

void union_f(int a, int b){
	a = find(a);
	b = find(b);
	if(a != b){
		parent[a] = b;
		num[b] += num[a];
		num[a] = 0;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	
	cin >> t;
	while(t--){
		tmp = 1;
		m.clear();
		for(int i=0; i<234567; i++){
			parent[i] = i;
			num[i] = 1;
		}
		
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> s1 >> s2;
			if(m[s1] == 0) m[s1] = tmp++;
			if(m[s2] == 0) m[s2] = tmp++;
			
			int k1 = m[s1];
			int k2 = m[s2];
			
			union_f(k1, k2);
			cout << max(num[find(k1)], num[find(k2)]) << "\n";
		}
	}
	return 0;
}
