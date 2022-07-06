#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

list<char> li;

int main(){
	int n;
	char tmp;
	string s;
	
	cin >> s >> n;
	for(int i=0; i<s.length(); i++){ li.push_back(s[i]); }	
	
	auto ptr = li.end();
	while(n--){
		cin >> s;
		if(s == "L"){ if(ptr != li.begin()) ptr--; }
		if(s == "D"){ if(ptr != li.end())   ptr++; }
		if(s == "B"){ if(ptr != li.begin()) ptr = li.erase(--ptr); }
		if(s == "P"){ cin >> tmp; li.insert(ptr, tmp); }
	}
	
	for(auto it = li.begin(); it != li.end(); it++){ cout << *it; }
	return 0;
}
