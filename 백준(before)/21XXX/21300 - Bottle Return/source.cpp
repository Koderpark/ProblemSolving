#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, ans=0;
	for(int i=0; i<6; i++){
		cin >> a;
		ans += a*5;
	}
	cout << ans;
	return 0;
}
