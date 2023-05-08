#include <bits/stdc++.h>
using namespace std;

vector<int> v;
set<vector<int>> s;

int main(){
	int n,m,a;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){ scanf("%d", &a); v.push_back(a); }
	sort(v.begin(), v.end());
	
	do{
		vector<int> tmp;
		tmp.assign(v.begin(), v.begin()+m);
		sort(tmp.begin(), tmp.end());
		s.insert(tmp);
	}while(next_permutation(v.begin(), v.end()));
	
	for(auto it=s.begin(); it!=s.end(); it++){
		const vector<int>& tmp = (*it);
		for(int i=0; i<tmp.size(); i++) printf("%d ", tmp[i]);
		puts("");
	}
	return 0;
}
