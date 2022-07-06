#include <bits/stdc++.h>
using namespace std;

vector<string> v;

bool chk[1234] = {0}; 

bool cmp(const string &a, const string &b){
	return a.length()>b.length();
}

int main(){
	string s,tmp;
	cin >> s;
	
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> tmp;
		v.push_back(tmp);
	}
	
	sort(v.begin(), v.end(), cmp);
	
	for(auto k : v){
		bool flag = true;
		for(int j=0; j<k.length(); j++){
			if(s[j] != k[j]){
				flag = false;
				break;
			}
		}
				
		if(flag) chk[k.length()] = true;
	}
	
	for(int i=0; i<s.length(); i++){
		if(chk[i]){
			for(auto k : v){
				bool flag = true;
				for(int j=0; j<k.length(); j++){
					if(s[i+j] != k[j]){
						flag = false;
						break;
					}
				}
				
				if(flag) chk[i+k.length()] = true;
			}
		}
	}
	
	cout << chk[s.length()];
	return 0;
}

/*

:thinking:
이거 뭐랄까 A끼리 서로 부분문자열? 인게 문제될거같은데
그냥 길이 긴순으로 replace해서 없애면안되나

:thinking: (2)
아 음 안될거같다는거만 깨달아버림
 
*/ 
