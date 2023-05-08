#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll a,b,x,y;
	cin >> a >> b >> x >> y;
	
	ll mx = max(a,b);
	ll mn = min(a,b);
	
	ll A = (a+b)*x;
	
	ll B = 0;
	if((a+b)%2) B = (mx-1)*y+x;
	else		B = mx*y;
	
	ll C = mn*y + (mx-mn)*x;
	
	cout << min({A,B,C});
	
	return 0;
}
