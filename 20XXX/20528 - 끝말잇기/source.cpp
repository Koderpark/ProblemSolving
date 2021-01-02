#include <iostream>
#include <string>

using namespace std;

int chk[256] = {0};

int main(){
	int n;
	int ans = 0;
	string s;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> s;
		chk[s[0]] = 1;
	}
	
	for(int i=0; i<256; i++) ans += chk[i];
	
	if(ans == 1) cout << "1";
	else cout << "0";
	return 0;
}
