#include <bits/stdc++.h>
using namespace std;

pair<int,string> p[123];

int main(){
	int a,b,c;
	string s;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> s >> a >> b >> c;
		p[i] = {(a*10000 + b*100 +c),s};
	}
	
	sort(p,p+n);
	
	for(int i=0; i<n; i++){
		cout << p[i].second << "\n";
	}
	return 0;
}
