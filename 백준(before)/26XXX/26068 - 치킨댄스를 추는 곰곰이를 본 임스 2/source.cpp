#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,ans=0;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		if(stoi(s.substr(2,s.length()-2)) <= 90) ans++;
	}
	cout << ans;
	return 0;
}
