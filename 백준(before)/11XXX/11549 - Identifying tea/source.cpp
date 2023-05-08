#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	int ans = 0;
	cin >> a;
	for(int i=0; i<5; i++){
		cin >> b;
		if(a==b) ans++;
	}
	cout << ans;
	return 0;
}
