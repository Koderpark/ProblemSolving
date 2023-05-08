#include <iostream>
#include <string>
#include <set>

using namespace std;

set<string> s;

int n;
string name;
string temp;

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> name >> temp;
		if(temp == "enter") s.insert(name);
		if(temp == "leave") s.erase(name);
	}
	for(auto it=s.rbegin(); it!=s.rend(); it++) cout << *it << "\n";
	return 0;
}
