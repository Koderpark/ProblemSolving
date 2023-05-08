#include <bits/stdc++.h>
using namespace std;

int N;
set<int> s;

void dfs(vector<int> v){
	//printf("["); for(auto it : v) printf("%d ", it); printf("]\n");
	
	int vsum = 0;
	for(auto it : v) vsum += it;
	
	if(v.size() >= 4){
		if(vsum == N && v.size() == 4){
			s.insert(v[0] + v[1]*5 + v[2]*10 + v[3]*50);
		}	
		return;
	}
	
	vector<int> tmp;
	for(int i=0; i<=N-vsum; i++){
		tmp.clear();
		tmp.assign(v.begin(), v.end());
		tmp.push_back(i);
		dfs(tmp);
	}
	return;
}

int main(){
	cin >> N;
	vector<int> tmp;
	dfs(tmp);
	cout << s.size();
	return 0;
}
