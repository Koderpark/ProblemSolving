#include <bits/stdc++.h>
using namespace std;

map<string,int> m;

int main(){
	int N;
	string a;
	cin >> N;
	for(int i=0; i<N*2-1; i++){
		cin >> a;
		m[a]++;
	}
	
	for(auto k : m){
		if(k.second %2){
			cout << k.first;
		}
	}
	return 0;
}
