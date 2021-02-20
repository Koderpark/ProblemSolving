#include <bits/stdc++.h>
using namespace std;

int ans;
int tmp;
bool chk = false;

int main(){
	string s;
	cin >> s;
	for(int i=0; i<s.length(); i++){
		if(s[i] == '-' || s[i] == '+'){
			if(chk) ans -= tmp;
			else    ans += tmp;
			tmp = 0;
			
			if(s[i] == '-') chk = true;
		}
		else{
			s[i]-='0';
			tmp*=10;
			tmp+=s[i];
		}
	}
	
	if(chk) ans -= tmp;
	else    ans += tmp;
	
	printf("%d", ans);
	return 0;
}
