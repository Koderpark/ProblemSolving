#include <bits/stdc++.h>
using namespace std;

map<int,int> cnt;
map<int,int> idx;
vector<pair<int,int>> v;

bool compare(const pair<int,int> a, const pair<int,int> b){
	if(a.second == b.second) return idx[a.first] < idx[b.first];
	return a.second > b.second;
}

int main(){
	int n;
	int c;
	cin >> n;
	cin >> c;
	for(int i=1; i<=n; i++){
		cin >> c;
		cnt[c]++;
		if(!idx[c]) idx[c] = i;
	}
	
	for(auto k : cnt){
		v.push_back({k.first, k.second});
	}
	
	sort(v.begin(), v.end(), compare);
	
	for(auto k : v){
		//cout << k.first << " " << k.second << "\n";
		for(int i=0; i<k.second; i++){
			cout << k.first << " ";
		}
	}
	return 0;
}
