#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		int A=0, B=0;
		string a,b;
		
		cin >> n;
		cin >> a >> b;
		
		for(int i=0; i<n; i++){
			if(a[i] == b[i]) continue;
			
			if(a[i]=='W' && b[i]=='B') A++;
			if(a[i]=='B' && b[i]=='W') B++;
		}
		
		cout << max(A,B) << "\n";
	}
	return 0;
}
