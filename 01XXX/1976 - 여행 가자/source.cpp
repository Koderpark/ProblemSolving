#include <bits/stdc++.h>
using namespace std;

int parent[234] = {0};
set<int> s;

int find(int k){
	if(parent[k] == k) return k;
	return parent[k] = find(parent[k]);
}

void joint(int a, int b){
	a = find(a);
	b = find(b);
	parent[a] = b;
}

int main(){
	int N,M;
	int tmp;
	cin >> N >> M;
	
	for(int i=0; i<234; i++) parent[i] = i;
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cin >> tmp;
			if(tmp){
				joint(i,j);
			}
		}
	}
	
	for(int i=0; i<M; i++){
		cin >> tmp;
		s.insert(find(tmp));
	}
	
	if(s.size() == 1) cout << "YES";
	else cout << "NO";
	return 0;
}
