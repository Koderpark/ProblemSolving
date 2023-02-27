#include <bits/stdc++.h>
using namespace std;

int cnt[256] = {0};

int main(){
	int N;
	string s;
	cin >> N;
	while(N--){
		cin >> s;
		
		memset(cnt, 0, sizeof(cnt));
		bool flag = false;
		
		for(int i=0; i<s.length(); i++){
			cnt[s[i]]++;
			if(cnt[s[i]] == 3){
				cnt[s[i]] = 0;
				i++;
				if(i == s.length() || s[i] != s[i-1]){
					flag = true;
					break;
				}
			}
		}
		
		if(flag) cout << "FAKE\n";
		else cout << "OK\n";
	}
	return 0;
}
