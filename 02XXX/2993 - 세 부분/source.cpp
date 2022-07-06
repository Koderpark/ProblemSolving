#include <bits/stdc++.h>
using namespace std;

int main(){
	char s[123] = {0};
	cin >> s;
	
	sort(s, s+strlen(s));
	
	cout << s;
	return 0;
}
