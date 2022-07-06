#include <bits/stdc++.h>
using namespace std;

vector<pair<int,string>> v;

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		char tmp;
		int num;
		string str;
		
		cin >> tmp >> num;
		if(tmp == 'I'){
			cin >> str;
			v.push_back({num,str});
		}
		if(tmp == 'D'){
			cin >> str;
			for(auto it : v){
				if(*it->first == num && *it->second == str){
					v.erase(it);
				}
			}
		}
	}
	
	for(auto it=m.begin(); it!=m.end(); it++){
		if(it->second != ""){
			v.push_back({it->first, it->second});
			cout << it->first << " " << it->second << "\n";
		}
	}
	
	/*for(int i=0; i<5; i++){
		int tmp;
		cin >> tmp;
		cout << v[tmp-1].first << " " << v[tmp-1].second << "\n";
	}*/
	return 0;
}
