#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> v;
vector<int> tmp;

void recur(int idx){
	if(tmp.size() == m){
		for(int i=0; i<m; i++) printf("%d ", tmp[i]); puts("");
		return;
	}
	
	for(int i=0; i<v.size(); i++){
		tmp.push_back(v[i]);
		recur(i);
		tmp.pop_back();
	}
	return;
}

int main(){
	int a;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		v.push_back(a);
	}
	
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	recur(0);
	return 0;
}
