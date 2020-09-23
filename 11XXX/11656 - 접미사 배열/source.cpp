#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> v;

int main(){
	string s;
	string tmp;
	cin >> s;
	
	int t = s.length();
	for(int i=0; i<t; i++) v.push_back(s.substr(i,t-i));
	
	sort(v.begin(), v.end());
	for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
	return 0;
}
