#include <bits/stdc++.h>
using namespace std;

int main(){
	int A,B,C;
	int ans;
	
	cin >> A >> B >> C;
	
	for(int i=0; i<C; i++){
		A = (A%B)*10;
		ans = A/B;
	}
	
	cout << ans;
	return 0;
}
