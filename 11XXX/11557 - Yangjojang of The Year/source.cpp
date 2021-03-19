#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

vector<pair<int, string>> v;

int main(){
	int t,n;
	pair<int,string> tmp;
	cin >> t;
	while(t--){
		cin >> n;
		v.clear();
		for(int i=0; i<n; i++){
			cin >> tmp.second >> tmp.first;
			v.push_back(tmp);
		}
		sort(v.begin(), v.end());
		cout << v[n-1].second << "\n";
	}
	return 0;
}
