#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int arr[256] = {0};
		string s;
		cin >> s;
		
		for(int i=0; i<s.length(); i++){
			arr[s[i]]++;
		}
	
		int ans = 0;
		for(int i='A'; i<='Z'; i++){
			if(arr[i] == 0) ans += i;
		}
		cout << ans << "\n";
	}
	return 0;
}
