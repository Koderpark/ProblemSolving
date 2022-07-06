#include <bits/stdc++.h>
using namespace std;

map<string,int> ma;

int main(){
	int n,m,k;
	string s;
	cin >> n >> m;
	
	for(int i=0; i<n; i++){
		cin >> s >> k;
		if(ma[s] != 0) ma[s] += k;
		else ma[s] = k;
	}
	
	for(int i=0; i<m; i++){
		cin >> s;
		cout << ma[s] << "\n";
	}
	return 0;
}
