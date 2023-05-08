#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string a,b;
	int aptr;
	int bptr;
	
	while(cin >> a){
		cin >> b;
		aptr = 0;
		bptr = 0;
		
		while(aptr<a.length() && bptr<b.length()){
			if(a[aptr] == b[bptr]){ aptr++; }
			bptr++;
		}
		
		if(aptr == a.length()) cout << "Yes\n";
		else cout << "No\n";	
	}
	return 0;
}
