#include <iostream>
#include <string>

using namespace std;

int min(int a, int b){ return a>b?b:a; }

int main(){
	int ans = 9999;
	string a;
	string b;
	cin >> a >> b;
	for(int i=0; i<=b.length()-a.length(); i++){
		int cnt = 0;
		for(int j=0; j<a.length(); j++) if(a[j] != b[i+j]) cnt++;
		ans = min(ans, cnt);
	}
	cout << ans;
	return 0;
}
