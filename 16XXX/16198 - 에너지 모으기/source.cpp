#include <bits/stdc++.h>
using namespace std;

vector<int> in;
int ans = -1;

int dfs(vector<int> v, int sum){
	if(v.size()==2){
		ans = max(ans, sum);
		return 0;
	}
	
	for(int i=1; i<v.size()-1; i++){
		vector<int> tmp = v;
		tmp.erase(tmp.begin()+i);
		dfs(tmp, sum + v[i-1]*v[i+1]);
	}
	return 0;
}

int main(){
	int N,k;
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> k;
		in.push_back(k);
	}
	
	dfs(in,0);
	cout << ans;
	return 0;
}
