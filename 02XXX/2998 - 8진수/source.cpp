#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int ans = 0;
	string s;
	cin >> s;
	while(s.length()%3!=0) s = '0'+s;
	
	for(int i=0; i<s.length(); i+=3){
		ans = 0;
		ans += (s[i]   -'0') * 4;
		ans += (s[i+1] -'0') * 2;
		ans += (s[i+2] -'0');
		cout << ans;
	}
	return 0;
}
