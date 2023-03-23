#include<bits/stdc++.h>
using namespace std;

map<string,int> m;

int main(){
	int N;
	string a,b;
	cin >> N;
	while(N--){
		bool flag = false;
		b = "";
		cin >> a;
		for(int i=0; i<a.length(); i++){
			if(flag) b += a[i];
			if(a[i] == '.') flag = true; 
		}
		m[b]++;
	}
	
	for(auto k : m){
		cout << k.first << " " << k.second << "\n";
	}
	return 0;
}
