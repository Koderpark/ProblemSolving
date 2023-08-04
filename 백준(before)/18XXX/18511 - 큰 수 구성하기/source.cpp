#include <bits/stdc++.h>
using namespace std;

int N,M;
vector<int> K;

int recur(int val){
	if(val > N) return -1;
	
	int ans = val;
	for(auto k : K){
		ans = max(ans, recur(val*10 + k));
	}
	return ans;
}

int main(){
	int k;
	cin >> N >> M;
	for(int i=0; i<M; i++){
		cin >> k;
		K.push_back(k);
	}
	
	cout << recur(0);
	return 0;
}
