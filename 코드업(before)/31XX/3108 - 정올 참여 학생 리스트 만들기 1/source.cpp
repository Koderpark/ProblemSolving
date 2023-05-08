#include <bits/stdc++.h>
using namespace std;

string s[12345];

vector<pair<int,string>> v;

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		char tmp;
		int num;
		string trash;
		
		cin >> tmp >> num;
		if(tmp == 'I') cin >> s[num];
		if(tmp == 'D'){
			cin >> trash;
			s[num] = "";
		}
	}
	
	for(int i=0; i<12345; i++){
		if(s[i] != ""){
			v.push_back({i,s[i]});
		}
	}
	
	for(int i=0; i<5; i++){
		int tmp;
		cin >> tmp;
		cout << v[tmp-1].first << " " << v[tmp-1].second << "\n";
	}
	return 0;
}
