#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

set<string> s;
vector<string> ans;

int main(){
	string str;
	int a, b;
	cin >> a >> b;
	for(int i=0; i<a; i++){
		cin >> str;
		s.insert(str);
	}
	for(int i=0; i<b; i++){
		cin >> str;
		if(s.insert(str).second == false) ans.push_back(str);
	}
	
	sort(ans.begin(), ans.end());
	cout << ans.size() << "\n";
	for(int i=0; i<ans.size(); i++) cout << ans[i] << "\n";
	return 0;
}
