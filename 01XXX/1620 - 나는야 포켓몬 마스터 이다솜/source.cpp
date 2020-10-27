#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <cstring>

using namespace std;
vector<pair<string,int>> v;

int main(){
	int n,m;
	string tmp;
	
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> tmp;
		v.push_back({tmp, i+1});
	}
	for(int i=0; i<m; i++){
		cin >> tmp;
		if('0' <= tmp[0] && tmp[0] <= '9'){
			int val = stoi(tmp);
			for(int i=0; i<v.size(); i++){
				if(v[i].second == val) cout << v[i].first << "\n";
			}
		}else{
			for(int i=0; i<v.size(); i++){
				if(v[i].first == tmp) cout << v[i].second << "\n";
			}
		}
	}
	return 0;
}
