#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	int ans = -1;
	int cur = 0;
	for(int i=0; i<10; i++){
		cin >> a >> b;
		cur -= a;
		ans = max(ans, cur);
		cur += b;
		ans = max(ans, cur); 
	}
	cout << ans;
	return 0;
}
